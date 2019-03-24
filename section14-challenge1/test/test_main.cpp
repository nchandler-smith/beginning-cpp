#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/helper.h"
#include "../src/Mystring.h"

#include <string>

TEST (Mystring, OverloadEqualsTrueWhenStringDataIsSame) {
    Mystring a {"Same string in a and b."};
    Mystring b {"Same string in a and b."};

    EXPECT_TRUE (a == b);
}

TEST (Mystring, OverloadEqualsFalseWhenStringDataIsDifferent) {
    Mystring a {"a string."};
    Mystring b {"b string."};

    EXPECT_FALSE (a == b);
}

TEST (Mystring, OverloadNotEqualsTrueWhenStringDataIsDifferent) {
    Mystring a {"a string."};
    Mystring b {"b string."};

    EXPECT_TRUE (a != b);
}

TEST (Mystring, OverloadNotEqualsFalseWhenStringDataIsSame) {
    Mystring a {"Same"};
    Mystring b {"Same"};

    EXPECT_FALSE (a != b);
}

TEST (Mystring, OverloadLessThanIsTrueWhenLeftStringIsLessThanRightStringLexicographically) {
    Mystring a {"A"};
    Mystring b {"B"};

    EXPECT_TRUE (a < b);
}

TEST (Mystring, OverloadLessThanIsFalseWhenLeftStringIsGreaterThanRightStringLexicographically) {
    Mystring a {"A"};
    Mystring b {"B"};

    EXPECT_FALSE (b < a);
}

TEST (Mystring, OverloadGreaterThanIsTrueWhenLeftStringIsGreaterThanRightStringLexicographically) {
    Mystring a {"A"};
    Mystring b {"B"};

    EXPECT_TRUE (b > a);
}

TEST (Mystring, OverloadGreaterThanIsFalseWhenLeftStringIsLessThanRightStringLexicographically) {
    Mystring a {"A"};
    Mystring b {"B"};

    EXPECT_FALSE (a > b);
}

TEST (Mystring, OverloadUnaryMinusReturnsCopyAsLowers) {
    Mystring a {"TO LOWER TEST"};
    Mystring expectValue {"to lower test"};
    
    Mystring returnValue {-a};

    EXPECT_EQ (expectValue, returnValue);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}