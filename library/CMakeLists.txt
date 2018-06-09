cmake_minimum_required (VERSION 3.9)

set (LIB_NAME rpg)

set (LIB_SOURCES
  source/die.cpp
)

add_library(${LIB_NAME}
  ${LIB_SOURCES}
)

target_include_directories(${LIB_NAME}
  PUBLIC
    include
)

#[[

# CMakeLists files in this project can
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 2.8.11)
project (HELLO)

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.


Then for each subdirectory specified, CMakeLists.txt files are created. In the ./Hello directory, the following CMakeLists.txt file is created:

# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (Hello hello.cxx)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
Finally, in the ./Demo directory, the third and final CMakeLists.txt file is created:

# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
add_executable (helloDemo demo.cxx demo_b.cxx)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (helloDemo LINK_PUBLIC Hello)

#]]
