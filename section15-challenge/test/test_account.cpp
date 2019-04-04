#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/account.h"

class AccountTest : public ::testing::Test {
    protected:
        Account account;

        AccountTest() {}

        void SetUp() override {
            account = Account();
        }
};

TEST_F(AccountTest, testCreateAccountHasDefaultName) {
    std::string expectedDefaultName {"Unnamed Account"};
    
    std::string actualDefaultName = account.getName();

    EXPECT_EQ(expectedDefaultName, actualDefaultName);
}

TEST_F(AccountTest, testCreateAccountHasDefaultBalance) {
    double expectedDefaultBalance {0};
    
    double actualDefaultBalance = account.getBalance();

    EXPECT_EQ(expectedDefaultBalance, actualDefaultBalance);
}

TEST_F(AccountTest, testAccountCreatedWithSpecifiedNameHasThatName) {
    std::string expectedAccountName {"Buncha Bucks"};

    account = Account(expectedAccountName);
    std::string actualAccountName {account.getName()};
}
