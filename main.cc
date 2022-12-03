#include <iostream>
#include <range/v3/view/transform.hpp>
#include "intermediate.h"

int main() {
  auto t = foo();
  std::cout << (t | ranges::view::transform([](auto x) { return x; })) << '\n';
  return 0;
}
