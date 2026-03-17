# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Virtual_Port_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Virtual_Port_autogen.dir\\ParseCache.txt"
  "Virtual_Port_autogen"
  )
endif()
