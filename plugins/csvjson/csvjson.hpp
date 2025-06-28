#pragma once

#include <QIODevice>

#include "graph.hpp"

namespace logicgraph {

class CsvJsonPlugin {
public:
    bool load(QIODevice* device, Graph& graph);
    bool save(QIODevice* device, const Graph& graph);
};

} // namespace logicgraph
