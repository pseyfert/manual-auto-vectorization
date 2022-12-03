#include "parts.h"
#include <vector>

void f(const std::vector<float>& a, std::vector<float>& b) {
  for (std::size_t i = 0; i < a.size(); ++i) {
    b[i] = wubbel(a[i]);
  }
}
