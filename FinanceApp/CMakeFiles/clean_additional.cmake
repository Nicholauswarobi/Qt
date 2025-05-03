# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Finance_Management_System_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Finance_Management_System_autogen.dir\\ParseCache.txt"
  "Finance_Management_System_autogen"
  )
endif()
