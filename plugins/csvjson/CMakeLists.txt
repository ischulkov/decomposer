find_package(Qt6 REQUIRED COMPONENTS Core)
add_library(csvjson_plugin STATIC csvjson.cpp)

target_link_libraries(csvjson_plugin PUBLIC logicgraph-core Qt6::Core)

target_include_directories(csvjson_plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
