#include "variant_runner.hpp"

namespace logicgraph {

VariantRunner::VariantRunner(QObject* parent) : QThread(parent) {}

void VariantRunner::setGraph(const Graph* graph) { graph_ = graph; }
void VariantRunner::setMaxVariants(size_t max) { maxVariants_ = max; }

void VariantRunner::run() {
    if (!graph_) return;
    // placeholder variant enumeration
    emit progress(100);
    auto* model = new QStandardItemModel();
    emit finished(model);
}

} // namespace logicgraph
