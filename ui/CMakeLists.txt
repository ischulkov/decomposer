set(CMAKE_AUTOMOC ON)
add_library(logicgraph-ui STATIC qml/GraphView.qml qml/NodeItem.qml qml/Main.qml widgets/MainWindow.cpp)

find_package(Qt6 REQUIRED COMPONENTS Quick Widgets)

qt_add_qml_module(logicgraph-ui
    URI LogicGraph
    VERSION 1.0
    QML_FILES
        qml/GraphView.qml
        qml/NodeItem.qml
        qml/Main.qml
)

target_link_libraries(logicgraph-ui PUBLIC Qt6::Quick Qt6::Widgets)
