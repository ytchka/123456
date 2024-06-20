// test.cpp
#include "class.h"
#include <gtest/gtest.h>

TEST(SingletonTest, InstanceEquality) {
    A* pa1 = A::getInstance();
    A* pa2 = A::getInstance();

    ASSERT_EQ(pa1, pa2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
