/*Copyright 2020 Alex Bieliakov*/

#include "big_formula.hpp"

#include <memory>

#include "mocks_include/mock_formula.hpp"

#include "gtest/gtest.h"

using ::testing::Return;

TEST(bigFormulaTest, test1) {
  std::shared_ptr<MockFormula> formula_mock = std::make_shared<MockFormula>();
  EXPECT_CALL(*formula_mock, Count(3)).WillOnce(Return(6));
  auto bf = BigFormula(formula_mock);
  EXPECT_EQ(bf.BigCount(3), 8);
}
