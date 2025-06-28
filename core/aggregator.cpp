#include "aggregator.hpp"

namespace logicgraph {

double SumAggregator::aggregate(const std::vector<double>& values) const {
    double sum = 0.0;
    for (double v : values) sum += v;
    return sum;
}

double MinAggregator::aggregate(const std::vector<double>& values) const {
    if (values.empty()) return 0.0;
    double m = values.front();
    for (double v : values) if (v < m) m = v;
    return m;
}

double MaxAggregator::aggregate(const std::vector<double>& values) const {
    if (values.empty()) return 0.0;
    double m = values.front();
    for (double v : values) if (v > m) m = v;
    return m;
}

double AverageAggregator::aggregate(const std::vector<double>& values) const {
    if (values.empty()) return 0.0;
    double sum = 0.0; for (double v : values) sum += v;
    return sum / values.size();
}

double LogicalAndAggregator::aggregate(const std::vector<double>& values) const {
    for (double v : values) if (v == 0.0) return 0.0;
    return 1.0;
}

double LogicalOrAggregator::aggregate(const std::vector<double>& values) const {
    for (double v : values) if (v != 0.0) return 1.0;
    return 0.0;
}

} // namespace logicgraph
