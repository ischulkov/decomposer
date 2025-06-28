find_package(Qt6 REQUIRED COMPONENTS Core Quick Widgets)
add_executable(LogicGraph main.cpp)

target_link_libraries(LogicGraph PRIVATE logicgraph-core logicgraph-ui csvjson_plugin xlsx_plugin Qt6::Core Qt6::Quick Qt6::Widgets)
