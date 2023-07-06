cmake_minimum_required(VERSION 3.0.0)
project(ML_Hand_Numbers VERSION 1.0.0)
project(ML_Hand_Numbers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE UNIX MAKEFILES)

set(NAME "Bennie Kowalski")
message("This project has been created by ${NAME}.")
message("My 1st Machine Language Code Porject.")


add_library(libraries 
            src/data.cpp 
            src/data_handler.cpp)  

add_executable(main
            src/main.cpp) 

target_include_directories(libraries PUBLIC include)
target_link_libraries(main PUBLIC libraries)