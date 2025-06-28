#include <gtest/gtest.h>
#include "aggregator.hpp"

TEST(SumAggregator, Basic) {
    logicgraph::SumAggregator a;
    EXPECT_DOUBLE_EQ(a.aggregate({1.0, 2.0}), 3.0);
}
