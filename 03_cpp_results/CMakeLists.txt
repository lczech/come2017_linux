# Simple playground CMake file

# Set up a new CMake project
project ( playground CXX )

# Set warning flags
set (WARN_FLAGS "-Wall -Wextra -pedantic -pedantic-errors")

# Set compiler flags
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ${WARN_FLAGS}")

# Put the binary into bin
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )

include_directories ( ${PROJECT_SOURCE_DIR}/src )

# Add a target to compile the binary from the source
add_executable( playground src/playground.cpp src/functions.cpp )
