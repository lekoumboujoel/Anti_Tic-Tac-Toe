# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "4x4_Tic_Tac_Toe_autogen"
  "CMakeFiles\\4x4_Tic_Tac_Toe_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\4x4_Tic_Tac_Toe_autogen.dir\\ParseCache.txt"
  )
endif()
