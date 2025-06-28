#pragma once

#include <vector>
#include <unordered_map>

#include "node.hpp"
#include "edge.hpp"

namespace logicgraph {

class Graph {
public:
    Node& addNode(const Node& node);
    void addEdge(const Edge& edge);
    void removeNode(int id);
    void removeEdge(int from, int to);

    const std::vector<Node>& nodes() const { return nodes_; }
    const std::vector<Edge>& edges() const { return edges_; }

    void recalc();

private:
    std::vector<Node> nodes_;
    std::vector<Edge> edges_;
};

} // namespace logicgraph
