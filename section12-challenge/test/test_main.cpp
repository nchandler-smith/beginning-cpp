#include "../googletest/googletest/include/gtest/gtest.h"

TEST (MainTest, Print) {
    EXPECT_EQ (1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}