/*Copyright 2020 Alex Bieliakov*/

#ifndef EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_BIG_FORMULA_HPP_
#define EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_BIG_FORMULA_HPP_

#include "gmock/gmock.h"

#include "i_big_formula.hpp"

class MockBigFormula : public IBigFormula {
public:
  MOCK_METHOD1(BigCount, int(int));
};

#endif // EXAMPLE_DOWNLOAD_GTEST_GMOCK_TEST_MOCKS_INCLUDE_MOCK_BIG_FORMULA_HPP_
