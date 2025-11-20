# ------------------------------
# Define the Library (functions.c)
# ------------------------------

# Create a static library named 'func' from functions.c
# Change STATIC to SHARED if you want a shared library (.so or .dll)
add_library(func STATIC functions.c)

# Optional: Ensure header files like functions.h are accessible to consumers
# This is usually managed by the root include_directories, but this is a more modern approach
target_include_directories(func PUBLIC ${PROJECT_SOURCE_DIR}/include)
