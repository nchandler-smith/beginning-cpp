#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/account.h"

class AccountTest : public ::testing::Test {
    protected:
        Account account;

        AccountTest() {}

        void SetUp() override {}
};

TEST_F(AccountTest, testCreateAccountHasDefaultName) {
    std::string expectedDefaultName {"Unnamed Account"};
    
    account = Account();
    std::string actualDefaultName = account.getName();

    EXPECT_EQ(expectedDefaultName, actualDefaultName);
}

TEST_F(AccountTest, testCreateAccountHasDefaultBalance) {
    double expectedDefaultBalance {0};
    
    account = Account();
    double actualDefaultBalance = account.getBalance();

    EXPECT_EQ(expectedDefaultBalance, actualDefaultBalance);
}

TEST_F(AccountTest, testAccountCreatedWithSpecifiedNameHasThatName) {
    std::string expectedAccountName {"Nate's Account"};

    account = Account(expectedAccountName);
    std::string actualAccountName {account.getName()};
}

TEST_F(AccountTest, testCreateAccountWithSpecifiedBalanceHasThatBalance) {
    std::string myAccountName {"Nates's Account"};
    double expectedAccountBalance {1000};

    account = Account(myAccountName, expectedAccountBalance);
    double actualAccountBalance {account.getBalance()};

    EXPECT_EQ(expectedAccountBalance, actualAccountBalance);
}
