#include "./range.h"

/*
  Given a range of days, what is the max profit that can be made, given the buy and sell
  Must be done on the open of the day
*/
float max_trade(const std::vector<DAY_INFO>& days) {
  float min_open;
  float best_profit = 0.0;
  bool first = true;
  for (auto const& day : days) {
    if (first) {
      first = false;
      min_open = day.open;
      continue;
    }

    const float profit = day.open - min_open;
    best_profit = profit > best_profit ? profit : best_profit;
    min_open = day.open < min_open ? day.open : min_open;
  }
  return best_profit;
}
