cmake_minimum_required(VERSION 3.16)
project(QmlMapDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

# Quick        -> the QML engine/runtime
# QuickWidgets -> QQuickWidget, which lets us embed a QML scene inside a
#                 normal QWidget-based window
find_package(Qt6 REQUIRED COMPONENTS Widgets Quick QuickWidgets)

add_executable(QmlMapDemo main.cpp)

target_link_libraries(QmlMapDemo PRIVATE
    Qt6::Widgets
    Qt6::Quick
    Qt6::QuickWidgets
)

# Instead of embedding MapCanvas.qml as a compiled-in resource (which needs
# extra machinery to work reliably), we just tell main.cpp where to find it
# on disk at compile time. QML_SOURCE_DIR becomes a string macro equal to
# this project's source folder.
target_compile_definitions(QmlMapDemo PRIVATE
    QML_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}"
)