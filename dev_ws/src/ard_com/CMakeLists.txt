cmake_minimum_required(VERSION 3.5)
project(ard_com)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# To edit CMakeLists.txt after adding a new header file, you need to: 1. add pkg here
# use "ros2 pkg list" to check
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

# To edit CMakeLists.txt after adding a new header file, you need to: 2. add pkg here
# use "ros2 pkg list" to check
add_executable(from_ard src/from_ard.cpp)
ament_target_dependencies(from_ard   
  rclcpp
  sensor_msgs
  tf2_msgs
  tf2_ros
  geometry_msgs
  nav_msgs
  tf2_geometry_msgs
)

install(TARGETS
  from_ard
  DESTINATION lib/ard_com
)

# add_executable(to_ard src/to_ard.cpp)
# ament_target_dependencies(to_ard rclcpp)

# install(TARGETS
# to_ard
#   DESTINATION lib/ard_com
# )