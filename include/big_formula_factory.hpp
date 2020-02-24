/*Copyright 2020 Alex Bieliakov*/

#ifndef EXAMPLE_DOWNLOAD_GTEST_GMOCK_INCLUDE_BIG_FORMULA_FACTORY_HPP_
#define EXAMPLE_DOWNLOAD_GTEST_GMOCK_INCLUDE_BIG_FORMULA_FACTORY_HPP_

#include <memory>

#include "i_big_formula.hpp"

std::shared_ptr<IBigFormula> MakeBigFormula();

#endif // EXAMPLE_DOWNLOAD_GTEST_GMOCK_INCLUDE_BIG_FORMULA_FACTORY_HPP_
