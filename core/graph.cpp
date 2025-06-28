#include "graph.hpp"
#include <algorithm>
#include "aggregator.hpp"

namespace logicgraph {

Node& Graph::addNode(const Node& node) {
    nodes_.push_back(node);
    nodes_.back().id = static_cast<int>(nodes_.size() - 1);
    return nodes_.back();
}

void Graph::addEdge(const Edge& edge) {
    edges_.push_back(edge);
}

void Graph::removeNode(int id) {
    nodes_.erase(std::remove_if(nodes_.begin(), nodes_.end(), [id](const Node& n) { return n.id == id; }), nodes_.end());
    edges_.erase(std::remove_if(edges_.begin(), edges_.end(), [id](const Edge& e) { return e.from == id || e.to == id; }), edges_.end());
}

void Graph::removeEdge(int from, int to) {
    edges_.erase(std::remove_if(edges_.begin(), edges_.end(), [=](const Edge& e) { return e.from == from && e.to == to; }), edges_.end());
}

void Graph::recalc() {
    // placeholder for topological traversal
}

} // namespace logicgraph
