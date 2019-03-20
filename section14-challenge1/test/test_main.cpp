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
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}