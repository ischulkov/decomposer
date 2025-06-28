#include "csvjson.hpp"

namespace logicgraph {

bool CsvJsonPlugin::load(QIODevice*, Graph&) { return false; }
bool CsvJsonPlugin::save(QIODevice*, const Graph&) { return false; }

} // namespace logicgraph
