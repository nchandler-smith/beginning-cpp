#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "random_integer.h"

TEST (RandomIntegerTest, Generate) {
    EXPECT_TRUE (true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}