/*Copyright 2020 Alex Bieliakov*/

#include "big_formula.hpp"

BigFormula::BigFormula(std::shared_ptr<IFormula> formula) : formula_(formula) {}

int BigFormula::BigCount(int value) { return formula_->Count(value) + 2; }
