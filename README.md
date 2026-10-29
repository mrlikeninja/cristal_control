# USV Waypoint Navigation Stack

A ROS 2 Humble based waypoint following stack for a small Unmanned Surface Vehicle (USV). This repository contains all custom packages used to take odometry from an Xsens MTi-680G GNSS/INS, transform it to a usable `odom -> base_link` frame, and drive the boat to a sequence of waypoints via `cmd_vel`.

This project was developed and tested in Ubuntu 22.04 with ROS 2 Humble.

## Table of Contents

- [Overview](#overview)
- [Hardware](#hardware)
- [Workspace Structure](#workspace-structure)
- [Software Dependencies](#software-dependencies)
- [Installation & Build](#installation--build)
- [Simulation Usage (Gazebo)](#simulation-usage-gazebo)
- [Real Hardware Usage](#real-hardware-usage)
- [INS Mounting Offset & Yaw Alignment](#ins-mounting-offset--yaw-alignment)
- [NTRIP / RTK Setup (ReNEP Gaia)](#ntrip--rtk-setup-renep-gaia)
- [Waypoint Tuning](#waypoint-tuning)
- [Actuation To The Boat (MAVROS)](#actuation-to-the-boat-mavros)
- [RViz INS Visualization](#rviz-ins-visualization)
- [Troubleshooting](#troubleshooting)
- [Notes & Known Limitations](#notes--known-limitations)


## Overview

The goal of this stack is to have a USV follow a set of hardcoded waypoints in a local Cartesian frame. 

The pipeline is designed to share the same `/odom` contract between simulation and hardware, meaning `waypoint_follower.py` does not need to be modified when switching between the two. 

The control scheme used is a simple proportional (P) controller. This has been verified in simulation and is sufficient for flat water testing. 


## Hardware

| Component | Details |
| :-- | :-- |
| INS/GNSS | Xsens MTi-680G-8A1G6 (Internal RTK GNSS receiver) |
| Connection | FTDI USB (`/dev/ttyUSB0`) @ `921600` baud |
| GNSS Corrections | ReNEP Gaia (NTRIP) |
| Actuation | ArduPilot via MAVROS (`/mavros/...`) |
| Frames | `map` -> `odom` -> `base_link` -> `imu_link` |


## Workspace Structure

This repo is meant to be at the root of a ROS 2 workspace (`usv_ws/`). 

```text
usv_ws/
├── src/
│   ├── usv_control/           # Custom control, adapter and launch files
│   ├── usv_description/       # URDF/Xacro of the USV and IMU mount
│   ├── usv_gazebo/            # Gazebo/Ignition simulation launch files
│   └── xsens_mti_ros_driver/  # Xsens MTi ROS 2 driver + NTRIP client
├── build/                     # (ignored) colcon build artifacts
├── install/                   # (ignored) colcon install artifacts
└── log/                       # (ignored) colcon logs
```

> Note: `cmd_vel_bridge` and `rover_cmd_vel_pub` live in a separate workspace (`~/ros2_ws/`) as they are used to bridge `/cmd_vel` to MAVROS for the real boat.


## Software Dependencies

These are the main dependencies used throughout the stack.

| Dependency | Purpose |
| :-- | :-- |
| `ros-humble-xacro` | URDF processing |
| `ros-humble-robot-state-publisher` | Publishes static/dynamic TF from URDF |
| `ros-humble-robot-localization` | EKF for odometry fusion (present, optional for first run) |
| `ros-humble-ros-gz-*` | Gazebo Fortress simulation bridge/plugins |
| `ros-humble-nmea-msgs` | Required by Xsens NTRIP client |
| `ros-humble-mavros` & `ros-humble-mavros-msgs` | Bridge to ArduPilot |
| `python3-transforms3d` | Quaternion/Euler conversions used by nodes |
| `python3-numpy` | Math utilities |


## Installation & Build

```bash
# Source ROS 2
source /opt/ros/humble/setup.bash

# Build everything
cd ~/usv_ws
colcon build
source install/setup.bash
```

It is recommended to add the sourcing to your `~/.bashrc` for convenience: 

```bash
echo 'source /opt/ros/humble/setup.bash' >> ~/.bashrc
echo 'source ~/usv_ws/install/setup.bash' >> ~/.bashrc
```


## Simulation Usage (Gazebo)

To test the waypoint follower in Gazebo Fortress: 

```bash
source /opt/ros/humble/setup.bash
source ~/usv_ws/install/setup.bash

ros2 launch usv_gazebo spawn_usv.launch.py
```

By default `start_waypoint_follower = True` in this launch file. The boat will follow the hardcoded waypoints `(3.0,0.0), (3.0,3.0), (0.0,3.0)` in the Gazebo odom frame. 

You can verify odometry with: 

```bash
ros2 topic echo /odom
ros2 topic echo /cmd_vel
```


## Real Hardware Usage

> The INS should be outdoors with a clear view of the sky before attempting to get a GNSS fix.

### 1) Launch the full hardware stack

This will launch the Xsens driver, `imu_odom_adapter`, both EKF instances, `robot_state_publisher`, and the waypoint follower (disabled by default).

```bash
source /opt/ros/humble/setup.bash
source ~/usv_ws/install/setup.bash

ros2 launch usv_control hardware.launch.py
```

If you would like to enable the follower immediately: 

```bash
ros2 launch usv_control hardware.launch.py start_waypoint_follower:=true
```

### 2) Verify topics and frames

```bash
# Check IMU and GNSS
ros2 topic hz /imu/data
ros2 topic hz /odometry
ros2 topic echo /gnss/pvt --once | grep -E "fix_type|num_sv|h_acc"

# Check the adapted odometry for the controller
ros2 topic hz /odom
ros2 topic echo /odom --once

# Check TF tree
ros2 run tf2_ros tf2_echo odom base_link
ros2 run tf2_tools view_frames  # Generates frames.pdf for inspection
```

### 3) Launch actuation to the boat

In a separate terminal, source your second workspace and bridge `/cmd_vel` to MAVROS: 

```bash
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/setup.bash

ros2 run cmd_vel_bridge bridge
```

Ensure ArduPilot is connected to MAVROS, armed and in `GUIDED` mode before sending velocity setpoints.


## INS Mounting Offset & Yaw Alignment

If the INS is not aligned with the boat bow (e.g. 90° rotated), **do not offset in the controller**. Correct this via the static transform. 

### Fix in URDF (Recommended)

Edit `src/usv_description/urdf/usv.urdf.xacro` and change the `imu_joint` `rpy` value. Yaw is in radians and is positive for counter-clockwise when viewed from above. A 90° clockwise error is typically `rpy="0 0 -1.5707963267948966"` (-π/2). 

```xml
<joint name="imu_joint" type="fixed">
  <parent link="base_link"/>
  <child link="imu_link"/>
  <origin xyz="0.0 0.0 0.15" rpy="0 0 -1.5707963267948966"/>
</joint>
```

Rebuild and source after changes: 

```bash
cd ~/usv_ws
colcon build --packages-select usv_description
source install/setup.bash
```

### Verification

1. Check static transform: `ros2 run tf2_ros tf2_echo base_link imu_link`
2. Use RViz: `ros2 launch usv_control ins_view.launch.py` and observe the boat model's bow whilst rotating the physical INS. The bow must follow the hull's direction, not the INS casing.
3. Test with a goal straight ahead: if aligned correctly, the boat should not immediately do a 90° turn to face a waypoint directly in front of it.


## NTRIP / RTK Setup (ReNEP Gaia)

The NTRIP client is already wired. The driver publishes `/nmea` at 4 Hz and subscribes to `/rtcm`. No changes are required to `usv_control`.

### Configure

Edit the config file: 

```text
src/xsens_mti_ros_driver/src/ntrip/config/ntrip-param.yaml
```

Example configuration for ReNEP Gaia: 

```yaml
ntrip_client:
  ros__parameters:
    host: <YOUR_RENEP_HOST>      # e.g. ntrip.renep.dgterritorio.pt
    port: 2101
    mountpoint: <YOUR_MOUNTPOINT>
    username: <YOUR_USERNAME>
    password: <YOUR_PASSWORD>

    nmea_input_rate: 4.0
    update_rate: 1.0
    reconnect_delay: 5.0
    max_reconnect_attempts: 0

    send_default_gga: False      # Use GGA from Xsens driver
    debug: False
    output_rtcm_details: False
```

> **Never commit your real credentials.** Add `src/xsens_mti_ros_driver/src/ntrip/config/ntrip-param.yaml` to your `.gitignore`. Use `ntrip-param.yaml.example` as a reference.

Build the package after changes: 

```bash
cd ~/usv_ws
colcon build --packages-select ntrip
source install/setup.bash
```

### Run

```bash
# Terminal 1
ros2 launch xsens_mti_ros2_driver xsens_mti_node.launch.py port:=/dev/ttyUSB0 baudrate:=921600

# Terminal 2
ros2 launch ntrip ntrip_launch.py
```

### Verify

```bash
ros2 topic hz /rtcm        # Should become active on connection
ros2 topic echo /gnss/pvt --once | grep -E "fix_type|num_sv|h_acc"
```

Expect `fix_type` to go from `3` (3D) to `4` (RTK Float) or `5` (RTK Fixed). `h_acc` will drop drastically. RTK requires being within range of the caster (~35-50km).


## Waypoint Tuning

Waypoints are currently hardcoded inside `usv_control/usv_control/waypoint_follower.py`:

```python
self.waypoints = [(3.0, 0.0), (3.0, 3.0), (0.0, 3.0)]
```

These are in meters relative to the **local odom frame**. The origin of this frame is set at the first valid GNSS fix on power up. Rebooting will create a brand new origin.

### Tuning parameters

| Parameter | Default | Recommendation (Real) | Notes |
| :-- | :-- | :-- | :-- |
| `k_linear` | `0.5` | `0.3 - 0.4` | Speed proportional to distance to waypoint. |
| `k_angular` | `1.0` | `0.6 - 0.8` | Turn rate proportional to heading error. |
| `max_linear` | `0.4` | `0.2 - 0.3` | m/s limit. Keep conservative for first tests. |
| `max_angular` | `0.6` | `0.3 - 0.4` | rad/s limit. Lower to reduce jerky turns. |
| `dist_threshold` | `0.2` | `1.0 - 1.5` | Meters to consider waypoint reached. With ~0.7-0.9m GNSS accuracy this must be raised. With RTK fixed it can be brought down. |
| turn threshold | `0.4` rad (~23°) | Leave as-is | If error larger than this, the boat will turn in place before driving. |

### Tips

- Tune one parameter at a time. Start conservative and increase gradually.
- If the boat oscillates left/right whilst going straight, lower `k_angular` first.
- If it never reaches the waypoint, increase `dist_threshold` rather than increasing gains.
- For a first in-water test, have a person on the kill switch at all times.
- If you want to test with different coordinates, record your position via `ros2 topic echo /odom --once` whilst stationary to get your local reference.


## Actuation To The Boat (MAVROS)

`usv_control` does **not** directly talk to the thrusters. It only publishes to `/cmd_vel`. The translation to ArduPilot is handled by `cmd_vel_bridge` in `~/ros2_ws/`.

```text
waypoint_follower (/odom) -> /cmd_vel -> cmd_vel_bridge -> /mavros/setpoint_velocity/cmd_vel_unstamped -> ArduPilot (GUIDED)
```

Requirements: 

1. MAVROS connected to the autopilot (e.g. telemetry link)
2. Autopilot set to `GUIDED` mode
3. Autopilot armed
4. Velocity setpoints enabled 

If the boat doesn't move whilst `/cmd_vel` is publishing, check mode/arm state first.


## RViz INS Visualization

To visually verify the INS orientation against your boat model without launching Gazebo: 

```bash
source /opt/ros/humble/setup.bash
source ~/usv_ws/install/setup.bash

ros2 launch usv_control ins_view.launch.py
```

This will launch the driver, `imu_odom_adapter`, `robot_state_publisher` and RViz with the USV model. Rotate the physical INS and watch the boat model turn. This is ideal for verifying yaw alignment before going in the water.

Do **not** run this at the same time as `hardware.launch.py`, as both will attempt to open `/dev/ttyUSB0` and publish to the same topics.


## Troubleshooting

| Issue | Cause | Fix |
| :-- | :-- | :-- |
| `Package 'xsens_mti_ros2_driver' not found` | Workspace not sourced | `source ~/usv_ws/install/setup.bash` |
| `No MTi device found` | Port busy or wrong port/baud | Check `ls /dev/ttyUSB*`, kill old processes with `fuser /dev/ttyUSB0` and ensure only one driver is running |
| `/odometry` not publishing | No GNSS fix | Move outdoors with clear sky view. Check `/gnss/pvt` for `fix_type >= 3` |
| Boat turns the wrong way | Yaw offset | Adjust `imu_joint` `rpy` in `usv.urdf.xacro` as per alignment section |
| Boat never reaches waypoints | GNSS accuracy vs threshold | Raise `dist_threshold` to ~1.0-1.5m, or get RTK fix |
| Jerky/oscillating motion | Gains too high | Lower `k_angular` and `max_angular` first |
| `/cmd_vel` published but boat doesn't move | MAVROS/ArduPilot not ready | Check mode (`GUIDED`), arm state, and `cmd_vel_bridge` running |
| `waypoint_follow.launch.py` hangs/crashes | Self-including launch | Do not use this file. Use `hardware.launch.py` instead |
| Duplicate `/odom` publishers | Multiple adapters/drivers running | Kill all processes (`pkill -f xsens_mti; pkill -f imu_odom_adapter`) and launch cleanly |


## Notes & Known Limitations

- **Local frame only**: The follower operates purely in Cartesian meters. The origin is reset every time you boot and get a first fix. Convert lat/lon to ENU externally if you need to hit an absolute surveyed point.
- **EKF double-counting**: The current two-filter setup fuses correlated measurements from the same GNSS/INS solution. For a first run, the direct `/odom` from `imu_odom_adapter` is perfectly acceptable. The EKF can be simplified later.
- **Hardcoded waypoints**: `waypoints` are defined inside the node. Consider making them ROS parameters for easier field changes.
- **No failsafe**: If `/odom` stops publishing, the follower will continue with the last known state. Adding a timeout (e.g. stop after 1s of no odometry) is highly recommended before unattended runs.
- **GNSS dependency**: Without a GNSS fix, `/odometry` from the driver will not publish, breaking the entire chain.
