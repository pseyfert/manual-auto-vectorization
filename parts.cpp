#define PARTS_IMPL
#include "parts.h"
#include <immintrin.h>
#include <cmath>

__attribute__((const)) __m256 wubbel(__m256 input) noexcept asm("_ZGVdN8v__Z6wubbelf");
__attribute__((const)) __m256 wubbel(__m256 input) noexcept {
  return _mm256_rsqrt_ps(input);
}

__attribute__((const)) __m128 wubbel(__m128 input) noexcept asm("_ZGVbN4v__Z6wubbelf");
__attribute__((const)) __m128 wubbel(__m128 input) noexcept {
  return _mm_hadd_ps(_mm_rsqrt_ps(input), input);
}

__attribute__((const)) float wubbel(float input) noexcept asm("_Z6wubbelf");
__attribute__((const)) float wubbel(float input) noexcept {
  return 1./std::sqrt(input) + 42.f;
}
#undef PARTS_IMPL
