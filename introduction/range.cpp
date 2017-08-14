#include "./range.h"

/*
  Given a range of days, what is the max profit that can be made, given the buy and sell
  Must be done on the open of the day
*/
float max_trade(const std::vector<DAY_INFO>& days) {
  float best_profit = 0.0;
  for (std::vector<DAY_INFO>::size_type i = 0; i < days.size(); i++) {
    const float buy_price = days[i].open;
    for (std::vector<DAY_INFO>::size_type j = i; j < days.size(); j++) {
      const float sell_price = days[j].open;
      const float profit = sell_price - buy_price;
      best_profit = profit > best_profit ? profit : best_profit;
    }
  }
  return best_profit;
}
