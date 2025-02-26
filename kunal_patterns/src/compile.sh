#!/bin/bash

# Set the project directory
PROJECT_DIR=$(pwd)
BUILD_DIR="$PROJECT_DIR/build"

# Remove and recreate the build directory
rm -rf "$BUILD_DIR"
mkdir "$BUILD_DIR"
cd "$BUILD_DIR" || exit

# Run CMake and Make
cmake ..
make

# Execute the compiled program and save output to output.txt
./pattern | tee "$PROJECT_DIR/output.txt"
