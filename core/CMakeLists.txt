find_package(Qt6 REQUIRED COMPONENTS Core Gui)
add_library(logicgraph-core)

# public headers
target_include_directories(logicgraph-core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# placeholder sources
set(SOURCES
    graph.cpp
    aggregator.cpp
    variant_runner.cpp
)
set(HEADERS
    graph.hpp
    node.hpp
    edge.hpp
    aggregator.hpp
    variant_runner.hpp
)

target_sources(logicgraph-core
    PRIVATE ${SOURCES}
    PUBLIC ${HEADERS}
)
target_link_libraries(logicgraph-core PUBLIC Qt6::Core Qt6::Gui)
