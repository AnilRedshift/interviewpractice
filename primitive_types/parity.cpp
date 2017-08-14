#include "./parity.h"

int16_t parity(uint64_t x) {
  int16_t parity = 0;
  uint64_t mask = 1;
  while (mask) {
    if (x & mask) {
      parity = !parity;
    }
    mask = mask << 1;
  }
  return parity;
}
