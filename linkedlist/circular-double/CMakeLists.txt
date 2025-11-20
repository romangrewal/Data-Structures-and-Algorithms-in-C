cmake_minimum_required(VERSION 3.10)
project(DoublyLinkedList C)

# Set the compiler flags
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED TRUE)
set(CMAKE_C_EXTENSIONS OFF)

# Add the 'include' directory so the compiler can find the headers
# This will be available to all targets
include_directories(include)

# Add the 'src' subdirectory to process its CMakeLists.txt
add_subdirectory(src)
