cmake_minimum_required(VERSION 3.10)

# Project name
project(PatternPrinter)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(pattern src/pattern.cpp)
