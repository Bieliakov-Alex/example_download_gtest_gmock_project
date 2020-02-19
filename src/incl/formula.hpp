/*Copyright 2020 Alex Bieliakov*/

#ifndef EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_FORMULA_HPP_
#define EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_FORMULA_HPP_

#include "i_formula.hpp"

class Formula : public IFormula {
public:
  Formula();

  int Count(int value) override;
};

#endif // EXAMPLE_DOWNLOAD_GTEST_GMOCK_SRC_INCL_FORMULA_HPP_
