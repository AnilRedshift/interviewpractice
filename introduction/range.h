#ifndef INTRODUCTION_RANGE_H_
#define INTRODUCTION_RANGE_H_
  typedef struct DAY_INFO {
    float open;
    float min;
    float max;
  } DAY_INFO;

  float max_trade(const DAY_INFO* const days);
#endif  // INTRODUCTION_RANGE_H_
