#ifndef PARTS_IMPL
__attribute__((const, simd("notinbranch")))
#else
__attribute__((const))
#endif
float wubbel(float x) noexcept asm("_Z6wubbelf");

// __attribute((const)) float wubbel(float input) noexcept asm("_ZGVbN4v__Z6wubbelf");
