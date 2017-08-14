#include "./range.h"
#include <gtest/gtest.h>

TEST(RangeTest, EmptyInput) {
  const std::vector<DAY_INFO> empty;
  EXPECT_EQ(0.0, max_trade(empty));
}
