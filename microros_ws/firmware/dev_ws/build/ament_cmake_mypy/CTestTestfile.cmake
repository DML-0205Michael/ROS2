# CMake generated Testfile for 
# Source directory: /home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy
# Build directory: /home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/test_results/ament_cmake_mypy/copyright.xunit.xml" "--package-name" "ament_cmake_mypy" "--output-file" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/ament_copyright/copyright.txt" "--command" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_copyright/bin/ament_copyright" "--xunit-file" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/test_results/ament_cmake_mypy/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy" _BACKTRACE_TRIPLES "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_copyright/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy/CMakeLists.txt;19;ament_copyright;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/test_results/ament_cmake_mypy/lint_cmake.xunit.xml" "--package-name" "ament_cmake_mypy" "--output-file" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/ament_lint_cmake/lint_cmake.txt" "--command" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_lint_cmake/bin/ament_lint_cmake" "--xunit-file" "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/build/ament_cmake_mypy/test_results/ament_cmake_mypy/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy" _BACKTRACE_TRIPLES "/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy/CMakeLists.txt;22;ament_lint_cmake;/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_mypy/CMakeLists.txt;0;")
