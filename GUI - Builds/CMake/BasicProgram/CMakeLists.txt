cmake_minimum_required(VERSION 3.10)
project(BasicProgram)

# Find the Gtkmm package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# Include directories
include_directories(${GTKMM_INCLUDE_DIRS})

# Link directories
link_directories(${GTKMM_LIBRARY_DIRS})

# Add the executable
add_executable(BasicProgram main.cpp)

# Link the executable with Gtkmm libraries
target_link_libraries(BasicProgram ${GTKMM_LIBRARIES})