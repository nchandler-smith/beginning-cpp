#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "../../../../tools/googletest/googlemock/include/gmock/gmock.h"
#include "../src/helper.h"

TEST (HelperTest, Help) {
    helper();
    EXPECT_TRUE (true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}