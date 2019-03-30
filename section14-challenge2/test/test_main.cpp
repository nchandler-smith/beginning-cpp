#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/Mystring.h"

TEST (MystringTest, OverloadEquals) {
    Mystring frank1 = {"frank"};
    Mystring frank2 = {"frank"};
    EXPECT_TRUE (frank1 == frank2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}