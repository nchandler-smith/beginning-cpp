#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/account.h"

class AccountTest : public ::testing::Test {
    //access modifiers

    //protected:
        // void SetUp() override {}
};

TEST_F(AccountTest, testAccountHasDefaultName) {
    std::string expectedDefaultName {"Unnamed Account"};
    Account account = Account();
    
    std::string actualDefaultName = account.getName();

    EXPECT_EQ(expectedDefaultName, actualDefaultName);
    } 