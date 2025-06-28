cmake_minimum_required(VERSION 3.27)
project(LogicGraph LANGUAGES CXX)
find_package(Qt6 REQUIRED COMPONENTS Core Quick Widgets)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


enable_testing()


add_subdirectory(core)
add_subdirectory(plugins)
add_subdirectory(ui)
add_subdirectory(app)
add_subdirectory(tests)
