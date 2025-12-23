cmake_minimum_required(VERSION 3.10)
project(5GNetworkSimulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(
    include
    src
)

# Find all source files
file(GLOB_RECURSE SOURCES
    src/*.cpp
)

# Build executable
add_executable(5g_simulator ${SOURCES})
