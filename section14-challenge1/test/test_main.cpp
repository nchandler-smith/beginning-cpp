#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "../../../../tools/googletest/googlemock/include/gmock/gmock.h"
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
    Mystring caps {"TO LOWER TEST"};
    std::string expectValue {"to lower test"};
    
    Mystring lowers {-caps};
    std::string actual = lowers.get_str();

    EXPECT_EQ (expectValue, actual);
}

TEST (Mystring, OverloadBinaryPlusConcatenates) {
    Mystring a {"First part. "};
    Mystring b {"Second part."};
    std::string expectValue {"First part. Second part."};
    Mystring actual {};
    actual = a + b;

    EXPECT_EQ (expectValue, actual.get_str());
}

TEST (Mystring, OverloadPlusEqualsConcatenation) {
    Mystring actual {"First part. "};
    Mystring b {"Second part."};
    std::string expectValue {"First part. Second part."};
    actual += b;

    EXPECT_EQ (expectValue, actual.get_str());

}

TEST (Mystring, OverloadStarCopiesString) {
    Mystring base {"12345"};
    std::string expectValue {"123451234512345"};
    Mystring actual {};
    actual = base * 3;

    EXPECT_EQ (expectValue, actual.get_str());
}

TEST (Mystring ,OverloadStarEqualsCopiesString) {
    Mystring base {"abcdef"};
    std::string expectValue {"abcdefabcdefabcdefabcdefabcdef"};
    base *= 5;

    EXPECT_EQ (expectValue, base.get_str());
}

TEST (Mystring, OverloadPreIncrementReturnsToUpper) {
    Mystring frank {"frank"};
    std::string expectValue {"FRANK"};
    
    ++frank;

    EXPECT_EQ (expectValue, frank.get_str());
}

TEST (Mystring, OverloadPostIncrementReturnsToUpper) {
    Mystring frank {"frank"};
    Mystring original = frank++;
    std::string expectValue1 {"frank"};
    std::string expectValue2 {"FRANK"};

    EXPECT_EQ (expectValue1, original.get_str());
    EXPECT_EQ (expectValue2, frank.get_str());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}