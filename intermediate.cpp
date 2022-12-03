#include <array>
#include <range/v3/algorithm/generate.hpp>
#include "intermediate.h"
#include "parts.h"

std::array<float, SIZE> foo() {
  std::array<float, SIZE> v;

  float i = 0.f;
  ranges::generate(v, [&i]() {
    i += 1.f;
    return 1. / (i * i);
  });

  std::array<float, SIZE> t;

  for (std::size_t i = 0; i < SIZE; ++i) {
    t[i] = wubbel(v[i]);
  }

  return t;
}
