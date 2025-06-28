#pragma once

#include <vector>

namespace logicgraph {

class IAggregator {
public:
    virtual ~IAggregator() = default;
    virtual double aggregate(const std::vector<double>& values) const = 0;
};

class SumAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

class MinAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

class MaxAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

class AverageAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

class LogicalAndAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

class LogicalOrAggregator : public IAggregator {
public:
    double aggregate(const std::vector<double>& values) const override;
};

} // namespace logicgraph
