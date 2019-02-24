// File name: ExtremeC_examples_chapter19_1_gtests.c
// Description: Google Test test cases for the exmaple 19.1.

// Required by Google Test
#include <gtest/gtest.h>

#include "ExtremeC_examples_chapter19_1.h"

int64_t fake_value = -1;

int64_t fake_feed() {
  return fake_value;
}

TEST(calc_factorial, fact_of_zero_is_one) {
  fake_value = 0;
  int64_t fact = calc_factorial(fake_feed);
  ASSERT_EQ(fact, 1);
}

TEST(calc_factorial, fact_of_negative_is_one) {
  fake_value = -10;
  int64_t fact = calc_factorial(fake_feed);
  ASSERT_EQ(fact, 1);
}

TEST(calc_factorial, fact_of_5_is_120) {
  fake_value = 5;
  int64_t fact = calc_factorial(fake_feed);
  ASSERT_EQ(fact, 120);
}

TEST(next_even_number, even_numbers_should_be_returned) {
  ASSERT_EQ(next_even_number(), 0);
  ASSERT_EQ(next_even_number(), 2);
  ASSERT_EQ(next_even_number(), 4);
  ASSERT_EQ(next_even_number(), 6);
  ASSERT_EQ(next_even_number(), 8);
}

TEST(next_even_number, numbers_should_rotate) {
  int64_t number = next_even_number();
  for (size_t i = 1; i <= 4; i++) {
    next_even_number();
  }
  int64_t number2 = next_even_number();
   ASSERT_EQ(number, number2);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
