cmake_minimum_required(VERSION 3.10)
   project(MyProject)

   # Set the path to the wxWidgets source directory
   set(wxWidgets_ROOT_DIR "/home/kowalski/Desktop/wxWidgets/")
   set(wxWidgets_LIB_DIR "${wxWidgets_ROOT_DIR}/lib")

   # Add wxWidgets to the project
   add_subdirectory(${wxWidgets_ROOT_DIR} ${wxWidgets_LIB_DIR})

   # Find wxWidgets libraries
   find_package(wxWidgets REQUIRED COMPONENTS core base)

   include(${wxWidgets_USE_FILE})

   # Add your executable and link it with wxWidgets
   add_executable(MyApp main.cpp)
   target_link_libraries(MyApp ${wxWidgets_LIBRARIES})
