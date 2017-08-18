#include "./even_sort.h"
#include <gtest/gtest.h>

TEST(EvenSort, EmptyInput) {
  int empty = 3;
  ASSERT_NO_THROW(even_sort(&empty, 0));
}

TEST(EvenSort, SingleArrayOdd) {
  int data[] = {3};
  even_sort(data, 1);
  ASSERT_EQ(data[0], 3);
}

TEST(EvenSort, SingleArrayEven) {
  int data[] = {4};
  even_sort(data, 1);
  ASSERT_EQ(data[0], 4);
}

TEST(EvenSort, TwoValuesInOrder) {
  int data[] = {4, 3};
  const int expected[] = {4, 3};
  even_sort(data, sizeof(data) / sizeof(data[0]));
  ASSERT_EQ(0, memcmp(data, expected, sizeof(data)));
}

TEST(EvenSort, TwoValuesOutOfOrder) {
  int data[] = {3, 4};
  const int expected[] = {4, 3};
  even_sort(data, sizeof(data) / sizeof(data[0]));
  ASSERT_EQ(0, memcmp(data, expected, sizeof(data)));
}
