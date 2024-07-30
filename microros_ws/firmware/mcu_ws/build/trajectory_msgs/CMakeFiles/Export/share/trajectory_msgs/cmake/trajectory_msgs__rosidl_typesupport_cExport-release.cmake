#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajectory_msgs::trajectory_msgs__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET trajectory_msgs::trajectory_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(trajectory_msgs::trajectory_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_typesupport_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajectory_msgs::trajectory_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajectory_msgs::trajectory_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_typesupport_c.a" )

# Import target "trajectory_msgs::trajectory_msgs__rosidl_typesupport_microxrcedds_c" for configuration "Release"
set_property(TARGET trajectory_msgs::trajectory_msgs__rosidl_typesupport_microxrcedds_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(trajectory_msgs::trajectory_msgs__rosidl_typesupport_microxrcedds_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_typesupport_microxrcedds_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajectory_msgs::trajectory_msgs__rosidl_typesupport_microxrcedds_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajectory_msgs::trajectory_msgs__rosidl_typesupport_microxrcedds_c "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_typesupport_microxrcedds_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
