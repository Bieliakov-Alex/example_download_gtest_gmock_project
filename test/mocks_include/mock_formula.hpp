/*Copyright 2020 Alex Bieliakov*/

#ifndef EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_FORMULA_HPP_
#define EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_FORMULA_HPP_

#include "gmock/gmock.h"

#include "i_formula.hpp"

class MockFormula : public IFormula {
public:
  MOCK_METHOD1(Count, int(int));
};

#endif // EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_FORMULA_HPP_
