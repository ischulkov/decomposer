#pragma once

#include <memory>
#include <vector>
#include <string>

namespace logicgraph {

enum class NodeType { Task, AndGate, OrGate };

class IAggregator;

struct Node {
    int id = 0;
    NodeType type = NodeType::Task;
    double value = 0.0;
    bool enabled = true;
    std::shared_ptr<IAggregator> aggregator;
};

} // namespace logicgraph
