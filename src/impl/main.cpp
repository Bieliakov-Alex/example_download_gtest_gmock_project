/*Copyright 2020 Alex Bieliakov*/
#include <iostream>

#include "big_formula_factory.hpp"
#include "formula_factory.hpp"

int main() {
  auto f = MakeFormula();
  std::cout << "Count: " << f->Count(12) << std::endl;

  auto bf = MakeBigFormula();
  std::cout << "Big Count: " << bf->BigCount(3) << std::endl;

  return 0;
}
