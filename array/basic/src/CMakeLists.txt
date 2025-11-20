# Add the 'lib' subdirectory to build the library
add_subdirectory(lib)

# ------------------------------
# Define the Executable (main.c)
# ------------------------------

add_executable(main main.c)

# Set the output location for the executable
# We use CMAKE_SOURCE_DIR to point to the top-level project root
set_target_properties(main PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
)

# Link the executable with the library target created in src/lib/CMakeLists.txt
# This tells the linker that main depends on func
target_link_libraries(main PRIVATE func)
