#!/bin/bash

# --- Build Script for CMake Project ---

# Exit immediately if a command exits with a non-zero status
set -e

BUILD_DIR="build"
EXECUTABLE_NAME="main"

# --- CLEAN FUNCTIONALITY ---
if [ "$1" == "clean" ]; then
    echo "--- Cleaning Project ---"
    
    # Remove the entire build directory
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        echo "Removed build directory: $BUILD_DIR"
    else
        echo "Build directory ($BUILD_DIR) does not exist."
    fi

    # Remove the executable placed in the root directory
    if [ -f "./$EXECUTABLE_NAME" ]; then
        rm "./$EXECUTABLE_NAME"
        echo "Removed executable: $EXECUTABLE_NAME"
    fi
    
    echo "Clean complete."
    exit 0
fi

# --- BUILD AND RUN FUNCTIONALITY ---

echo "--- Building and Running Project ---"

echo "1. Checking for and creating the build directory: $BUILD_DIR"
if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
    echo "Directory '$BUILD_DIR' created."
fi

echo "2. Navigating to $BUILD_DIR and running CMake configuration..."
cd "$BUILD_DIR"

# Configure the project: '..' points to the root directory's CMakeLists.txt
cmake ..

echo "3. Compiling the project using Make..."
make

echo -e "\nBuild process finished."
