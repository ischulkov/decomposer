find_package(Qt6 REQUIRED COMPONENTS Core)
add_library(xlsx_plugin STATIC xlsx.cpp)

target_link_libraries(xlsx_plugin PUBLIC logicgraph-core Qt6::Core)

target_include_directories(xlsx_plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
