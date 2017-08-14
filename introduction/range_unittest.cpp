#include "./range.h"
#include <gtest/gtest.h>

TEST(RangeTest, EmptyInput) {
  const std::vector<DAY_INFO> empty;
  ASSERT_FLOAT_EQ(0.0, max_trade(empty));
}

TEST(RangeTest, OneDay) {
  const std::vector<DAY_INFO> days = { { 5.2, 3.0, 8.0 } };
  ASSERT_FLOAT_EQ(0.0, max_trade(days));
}

TEST(RangeTest, lowestFirstDay) {
  const std::vector<DAY_INFO> days = {
    { 5.2, 3.0, 8.0 },
    { 6.2, 3.0, 8.0 },
    { 7.3, 3.0, 8.0 }
  };
  ASSERT_FLOAT_EQ(2.1, max_trade(days));
}

TEST(RangeTest, lowestSecondDay) {
  const std::vector<DAY_INFO> days = {
    { 5.2, 3.0, 8.0 },
    { 4.2, 3.0, 8.0 },
    { 7.3, 3.0, 8.0 }
  };
  ASSERT_FLOAT_EQ(3.1, max_trade(days));
}

TEST(RangeTest, lowestThirdDay) {
  const std::vector<DAY_INFO> days = {
    { 5.2, 3.0, 8.0 },
    { 4.2, 3.0, 8.0 },
    { 3.3, 3.0, 8.0 }
  };
  ASSERT_FLOAT_EQ(0.0, max_trade(days));
}
