/*Copyright 2020 Alex Bieliakov*/

#ifndef EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_BIG_FORMULA_HPP_
#define EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_BIG_FORMULA_HPP_

#include "i_big_formula.hpp"

#include <memory>

#include "i_formula.hpp"

class BigFormula : public IBigFormula {
public:
  explicit BigFormula(std::shared_ptr<IFormula> formula);

  int BigCount(int value) override;

private:
  std::shared_ptr<IFormula> formula_;
};

#endif // EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_BIG_FORMULA_HPP_
