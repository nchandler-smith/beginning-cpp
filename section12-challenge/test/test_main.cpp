#include "../googletest/googletest/include/gtest/gtest.h"
#include "../src/print.h"

TEST (PrettyPrintTest, PrintZero) {
    int test_array[1] {0};
    EXPECT_EQ ("[ 0 ]", pretty_print(test_array, 1));
}

TEST (PrettyPrintTest, PrintZeroAndOne) {
    int test_array[2] {0, 1};
    EXPECT_EQ ("[ 0 1 ]", pretty_print(test_array, 2));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}