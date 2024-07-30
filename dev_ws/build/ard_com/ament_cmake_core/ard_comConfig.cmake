# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ard_com_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ard_com_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ard_com_FOUND FALSE)
  elseif(NOT ard_com_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ard_com_FOUND FALSE)
  endif()
  return()
endif()
set(_ard_com_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ard_com_FIND_QUIETLY)
  message(STATUS "Found ard_com: 0.0.0 (${ard_com_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ard_com' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ard_com_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ard_com_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ard_com_DIR}/${_extra}")
endforeach()