/*Copyright 2020 Alex Bieliakov*/

#include "big_formula_factory.hpp"

#include "big_formula.hpp"
#include "formula_factory.hpp"

std::shared_ptr<IBigFormula> MakeBigFormula() {
  auto formula = MakeFormula();
  return std::make_shared<BigFormula>(formula);
}
