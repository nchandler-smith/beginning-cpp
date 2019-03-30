#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/Mystring.h"

TEST (MystringTest, OverloadEqualsWhenEqualsReturnsTrue) {
    Mystring frank1 = {"frank"};
    Mystring frank2 = {"frank"};
    EXPECT_TRUE (frank1 == frank2);
}

TEST (MystringTest, OverloadEqualsWhenNotEqualReturnsFalse) {
    Mystring frank = {"frank"};
    Mystring bob = {"bob"};
    EXPECT_FALSE (frank == bob);
}

TEST (MystringTest, OverloadNotEqualsWhenNotEqualRetrunsTrue) {
    Mystring frank = {"frank"};
    Mystring bob = {"bob"};
    EXPECT_TRUE (frank != bob);
}

TEST (MystringTest, OverloadNotEqualsWhenEqualsReturnsFalse) {
    Mystring frank1 = {"frank"};
    Mystring frank2 = {"frank"};
    EXPECT_FALSE (frank1 != frank2);
}

TEST (MystringTest, OverloadLessThanWhenTrue) {
    Mystring frank {"frank"};
    Mystring george {"george"};
    EXPECT_TRUE (frank < george);
}

TEST (MystringTest, OverloadLessThanWhenFalse) {
    Mystring frank {"frank"};
    Mystring george {"george"};
    EXPECT_FALSE (george < frank);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}