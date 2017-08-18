#include "./even_sort.h"
#include <gtest/gtest.h>

TEST(EvenSort, EmptyInput) {
  const int empty = 3;
  ASSERT_NO_THROW(even_sort(&empty, 0));
}

TEST(EvenSort, SingleArrayOdd) {
  const int data[] = {3};
  even_sort(data, sizeof(data));
  ASSERT_EQ(data[0], 3);
}

TEST(EvenSort, SingleArrayEven) {
  const int data[] = {4};
  even_sort(data, sizeof(data));
  ASSERT_EQ(data[0], 4);
}

TEST(EvenSort, TwoValuesInOrder) {
  const int data[] = {3, 4};
  const int expected[] = {3, 4};
  even_sort(data, sizeof(data));
  ASSERT_EQ(0, memcmp(data, expected, sizeof(data)));
}

TEST(EvenSort, TwoValuesOutOfOrder) {
  const int data[] = {4, 3};
  const int expected[] = {3, 4};
  even_sort(data, sizeof(data));
  ASSERT_EQ(0, memcmp(data, expected, sizeof(data)));
}
