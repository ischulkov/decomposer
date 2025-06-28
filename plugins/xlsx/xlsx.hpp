#pragma once

#include <QIODevice>

#include "graph.hpp"

namespace logicgraph {

class XlsxPlugin {
public:
    bool load(QIODevice*, Graph&) { return false; }
    bool save(QIODevice*, const Graph&) { return false; }
};

} // namespace logicgraph
