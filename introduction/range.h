#ifndef INTRODUCTION_RANGE_H_
#define INTRODUCTION_RANGE_H_
#include <vector>

typedef struct DAY_INFO {
  float open;
  float min;
  float max;
} DAY_INFO;

float max_trade(const std::vector<DAY_INFO>& days);
#endif  // INTRODUCTION_RANGE_H_
