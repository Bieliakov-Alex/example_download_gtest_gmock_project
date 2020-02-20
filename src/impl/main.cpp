/*Copyright 2020 Alex Bieliakov*/
#include <iostream>

#include "formula_factory.hpp"

int main() {
  auto f = MakeFormula();
  std::cout << f->Count(12) << std::endl;
  return 0;
}
