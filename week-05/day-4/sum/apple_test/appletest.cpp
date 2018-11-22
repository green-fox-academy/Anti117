#include <gtest/gtest.h>
#include "apple.h"
#include <vector>

TEST(apple_check, test_apple){
    ASSERT_EQ(getApple(), "apple");
}

TEST(apple_check2, test_sum){
    std::vector<int>elements ={0,1,2,3};
    ASSERT_EQ(sum(elements), 6);
}

TEST(apple_check2, test_elementse) {
    std::vector<int> elements = {};
    ASSERT_EQ(sum(elements), 6);
}

TEST(apple_check2, test_elementsn) {
    std::vector<int> elements = {-1, -2};
    ASSERT_EQ(sum(elements), 6);
}
TEST(apple_check2, test_elments1) {
    std::vector<int> elements = {2};
    ASSERT_EQ(sum(elements), 6);
}