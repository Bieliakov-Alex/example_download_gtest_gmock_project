/*Copyright 2020 Alex Bieliakov*/

#include "formula.hpp"

#include "gtest/gtest.h"

TEST(formulaTest, test1) {
  auto f = Formula();
  EXPECT_EQ(f.Count(2), 4);
}
