/*Copyright 2020 Alex Bieliakov*/

#include "formula_factory.hpp"

#include "formula.hpp"

std::shared_ptr<IFormula> MakeFormula() { return std::make_shared<Formula>(); }
