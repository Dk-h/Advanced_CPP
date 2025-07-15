cmake_minimum_required(VERSION 4.10)
project(AdvancedCPP)

set(CMAKE_CXX_STANDARD 20)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(utils)

add_executable(advanced_cpp src/init.cpp)