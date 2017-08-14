#include "./parity.h"
#include <unordered_map>
#include <iostream>

std::unordered_map<uint8_t, int16_t> cache;

int16_t parity(uint8_t x) {
  if (cache.find(x) == cache.end()) {
    int16_t p = 0;
    uint8_t mask = 1;
    while (mask) {
      if (x & mask) {
        p = !p;
      }
      mask = mask << 1;
    }
    cache[x] = p;
  }

  return cache[x];
}

int16_t parity(uint64_t x)  {
  int16_t p = 0;
  for (int i = 0; i < 8; i++) {
    const uint8_t word = static_cast<uint8_t>(x >> (8 * i));
    p = p ^ parity(word);
  }
  return p;
}
