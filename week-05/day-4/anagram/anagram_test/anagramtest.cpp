#include <gtest/gtest.h>
#include "anagram.h"

std::string str1 = "fractal";
std::string str2 = "flatcar";

TEST(anagram_check, test_anagram) {
    ASSERT_NE(str1, str2);
}