cmake_minimum_required(VERSION 3.10)

# Project name
project(MySFMLProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Manually set the SFML library and include paths
set(SFML_INCLUDE_DIR "/usr/include")
set(SFML_LIBRARY_DIR "/usr/lib")

# Include directories
include_directories(${SFML_INCLUDE_DIR})

# Link directories
link_directories(${SFML_LIBRARY_DIR})

# Add the executable
add_executable(MySFMLProject main.cpp)  # Ensure the path to main.cpp is correct

# Link SFML libraries
target_link_libraries(MySFMLProject sfml-graphics sfml-window sfml-system sfml-audio sfml-network)
