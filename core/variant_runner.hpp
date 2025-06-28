#pragma once

#include <QObject>
#include <QThread>
#include <QStandardItemModel>

#include "graph.hpp"

namespace logicgraph {

class VariantRunner : public QThread {
    Q_OBJECT
public:
    VariantRunner(QObject* parent = nullptr);
    void setGraph(const Graph* graph);
    void setMaxVariants(size_t max);
signals:
    void progress(int percent);
    void finished(QStandardItemModel* model);
protected:
    void run() override;
private:
    const Graph* graph_ = nullptr;
    size_t maxVariants_ = 0;
};

} // namespace logicgraph
