cmake_minimum_required(VERSION 3.5)
project(learning_node)

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

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(msg_pkg REQUIRED)

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

add_executable(node1_nick_name src/use_POP_node1.cpp)
ament_target_dependencies(node1_nick_name rclcpp)

install(TARGETS
  node1_nick_name
  DESTINATION lib/learning_node
)

add_executable(node2_nick_name src/use_OOP_node2.cpp)
ament_target_dependencies(node2_nick_name rclcpp)

install(TARGETS
  node2_nick_name
  DESTINATION lib/learning_node
)

add_executable(pub_test src/pub.cpp)
ament_target_dependencies(pub_test rclcpp)

install(TARGETS
  pub_test
  DESTINATION lib/learning_node
)

add_executable(sub_test src/sub.cpp)
ament_target_dependencies(sub_test rclcpp)

install(TARGETS
  sub_test
  DESTINATION lib/learning_node
)


add_executable(service_test src/server.cpp)
ament_target_dependencies(service_test rclcpp
  rclcpp
  msg_pkg  
)

install(TARGETS
  service_test
  DESTINATION lib/learning_node
)

add_executable(client_test src/client.cpp)
ament_target_dependencies(client_test rclcpp
  rclcpp
  msg_pkg  
)

install(TARGETS
  client_test
  DESTINATION lib/learning_node
)