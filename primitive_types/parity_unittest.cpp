#include "./parity.h"
#include <gtest/gtest.h>


TEST(Parity, zero) {
  ASSERT_EQ(0, parity(0));
}

TEST(Parity, one) {
  ASSERT_EQ(1, parity(1));
}

TEST(Parity, two) {
  ASSERT_EQ(1, parity(2));
}

TEST(Parity, three) {
  ASSERT_EQ(0, parity(3));
}

TEST(Parity, four) {
  ASSERT_EQ(1, parity(4));
}

TEST(Parity, seven) {
  ASSERT_EQ(1, parity(7));
}
