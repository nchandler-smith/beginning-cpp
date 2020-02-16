#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "random_integer.h"

TEST (RandomIntegerTest, Generate) {
    RandomInteger* randomInteger = new RandomInteger();
    int lowerBound = 1;
    int upperBound = 10;

    int randomNumber = randomInteger->generate(lowerBound, upperBound);
    ASSERT_LE(randomNumber, upperBound);
    ASSERT_GE(randomNumber, lowerBound);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}