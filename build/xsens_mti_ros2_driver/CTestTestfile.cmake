# CMake generated Testfile for 
# Source directory: /home/pedro/usv_ws/src/xsens_mti_ros_driver/src/xsens_mti_ros2_driver
# Build directory: /home/pedro/usv_ws/build/xsens_mti_ros2_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_imu_publisher "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/pedro/usv_ws/build/xsens_mti_ros2_driver/test_results/xsens_mti_ros2_driver/test_imu_publisher.gtest.xml" "--package-name" "xsens_mti_ros2_driver" "--output-file" "/home/pedro/usv_ws/build/xsens_mti_ros2_driver/ament_cmake_gtest/test_imu_publisher.txt" "--command" "/home/pedro/usv_ws/build/xsens_mti_ros2_driver/test_imu_publisher" "--gtest_output=xml:/home/pedro/usv_ws/build/xsens_mti_ros2_driver/test_results/xsens_mti_ros2_driver/test_imu_publisher.gtest.xml")
set_tests_properties(test_imu_publisher PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/pedro/usv_ws/build/xsens_mti_ros2_driver/test_imu_publisher" TIMEOUT "60" WORKING_DIRECTORY "/home/pedro/usv_ws/build/xsens_mti_ros2_driver" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/pedro/usv_ws/src/xsens_mti_ros_driver/src/xsens_mti_ros2_driver/CMakeLists.txt;183;ament_add_gtest;/home/pedro/usv_ws/src/xsens_mti_ros_driver/src/xsens_mti_ros2_driver/CMakeLists.txt;0;")
add_test(local_enu_regression "/home/pedro/usv_ws/build/xsens_mti_ros2_driver/test_local_enu")
set_tests_properties(local_enu_regression PROPERTIES  _BACKTRACE_TRIPLES "/home/pedro/usv_ws/src/xsens_mti_ros_driver/src/xsens_mti_ros2_driver/CMakeLists.txt;269;add_test;/home/pedro/usv_ws/src/xsens_mti_ros_driver/src/xsens_mti_ros2_driver/CMakeLists.txt;0;")
subdirs("xsens_mti_ros2_driver__py")
subdirs("gtest")
