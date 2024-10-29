#ifndef EQUATIONS_H
#define EQUATIONS_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "my_functions.h"
}

TEST(equations_tests, wrong_a){
  struct roots actual_ans = equation_roots(0, 2, 4);
  ASSERT_EQ(actual_ans.valid, 0);
}

TEST(equations_tests, positive_discriminant1){
  struct roots actual_ans = equation_roots(2, -5, 3);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  ASSERT_EQ(actual_x1.real, 1);
  ASSERT_EQ(actual_x1.imaginary, 0);
  ASSERT_EQ(actual_x2.real, 1.5);
  ASSERT_EQ(actual_x2.imaginary, 0);
}

TEST(equation_tests, positive_discriminant2){
  struct roots actual_ans = equation_roots(-3, 42, 1000);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  EXPECT_NEAR(actual_x1.real, 26.553345f, 0.00001f);
  EXPECT_NEAR(actual_x1.imaginary, 0, 0.1f);
  EXPECT_NEAR(actual_x2.real, -12.553345f, 0.00001f);
  EXPECT_NEAR(actual_x2.imaginary, 0, 0.1f);
}

TEST(equations_tests, negative_discriminant1){
  struct roots actual_ans = equation_roots(2, -5, 4.25f);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  ASSERT_EQ(actual_x1.real, 1.25f);
  ASSERT_EQ(actual_x1.imaginary, -0.75f);
  ASSERT_EQ(actual_x2.real, 1.25f);
  ASSERT_EQ(actual_x2.imaginary, 0.75f);
}

TEST(equation_tests, negative_discriminant2){
  struct roots actual_ans = equation_roots(-3, 21, -10000);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  EXPECT_NEAR(actual_x1.real, 3.5f, 0.00001f);
  EXPECT_NEAR(actual_x1.imaginary, 57.628841f, 0.1f);
  EXPECT_NEAR(actual_x2.real, 3.5f, 0.00001f);
  EXPECT_NEAR(actual_x2.imaginary, -57.628841f, 0.1f);
}

TEST(equations_tests, zero_discriminant1){
  struct roots actual_ans = equation_roots(3, 6, 3);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  ASSERT_EQ(actual_x1.real, -1);
  ASSERT_EQ(actual_x1.imaginary, 0);
  ASSERT_EQ(actual_x2.real, -1);
  ASSERT_EQ(actual_x2.imaginary, 0);
}

TEST(equation_tests, zero_discriminant2){
  struct roots actual_ans = equation_roots(-6.4f, 32, -40);
  struct root actual_x1 = actual_ans.x1;
  struct root actual_x2 = actual_ans.x2;
  ASSERT_EQ(actual_ans.valid, 1);
  EXPECT_NEAR(actual_x1.real, 2.5f, 0.00001f);
  EXPECT_NEAR(actual_x1.imaginary, 0, 0.1f);
  EXPECT_NEAR(actual_x2.real, 2.5f, 0.00001f);
  EXPECT_NEAR(actual_x2.imaginary, 0, 0.1f);
}
#endif
