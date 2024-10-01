# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyCppLibrary)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library and include path
add_library(mylib STATIC src/main.cpp)

# Include directories for header files
target_include_directories(mylib PUBLIC include)

# Set output directories for the static library
set_target_properties(mylib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
