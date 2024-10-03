# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "App_autogen"
  "CMakeFiles\\App_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\App_autogen.dir\\ParseCache.txt"
  )
endif()
