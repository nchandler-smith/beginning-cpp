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

TEST (MystringTest, OverloadGreaterThanWhenTrue) {
    Mystring frank {"frank"};
    Mystring george {"george"};

    EXPECT_TRUE (george > frank);
}

TEST (MystringTest, OverloadGreaterThanWhenEqualsReturnsFalse) {
    Mystring frank1 {"frank"};
    Mystring frank2 {"frank"};

    EXPECT_FALSE (frank1 > frank2);
}

TEST (MystringTest, OverloadGreaterThanWhenLessThanReturnsFalse) {
    Mystring frank {"frank"};
    Mystring george {"george"};

    EXPECT_FALSE (frank > george);
}

TEST (MystringTest, OverloadUnaryMinusReturnsLowerCase) {
    Mystring allCaps {"ALL LOWERS"};
    std::string expectedValue {"all lowers"};
    Mystring actualValue {};

    actualValue = -allCaps;

    EXPECT_EQ (expectedValue, actualValue.get_str());
}

TEST (MystringTest, OverloadingPlusReturnsConcatenates) {
    Mystring a {"a"};
    Mystring b {"b"};
    Mystring actualValue {};
    std::string expectedValue {"ab"};

    actualValue = a + b;

    EXPECT_EQ (expectedValue, actualValue.get_str());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}