#ifndef INTRODUCTON_RANGE_H_
#define INTRODUCTON_RANGE_H_
  typedef struct DAY_INFO {
    float open;
    float min;
    float max;
  } DAY_INFO;

  float max_trade(const DAY_INFO* const days);
#endif // INTRODUCTON_RANGE_H_
