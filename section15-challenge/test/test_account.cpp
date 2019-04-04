#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/account.h"

class AccountTest : public ::testing::Test {
    // properties
    protected:
        static const constexpr char* TEST_ACCOUNT_NAME {"Test Account"};
        static const constexpr double TEST_STARTING_BALANCE {2500};
        Account account;
        
    // methods
        AccountTest() {}

        void SetUp() override {
            account = Account(TEST_ACCOUNT_NAME, TEST_STARTING_BALANCE);
        }
        
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

TEST_F(AccountTest, testDepositAmountGreaterThan0AddsAmountToBalance) {
    double depositAmount = 5000;
    account = Account(TEST_ACCOUNT_NAME, TEST_STARTING_BALANCE);
    double expectedBalance = TEST_STARTING_BALANCE + depositAmount;

    account.deposit(depositAmount);
    double actualBalance = account.getBalance();

    EXPECT_EQ(expectedBalance, actualBalance);
}

TEST_F(AccountTest, testDepositAmountGreaterThan0ReturnsTrue) {
    double depositAmount = 5000;
    account = Account(TEST_ACCOUNT_NAME, TEST_STARTING_BALANCE);
    bool success {};

    success = account.deposit(depositAmount);
    double actualBalance = account.getBalance();

    EXPECT_TRUE(success);
}

TEST_F(AccountTest, testDepositAmountLessThan0ReturnsFalse) {
    double depositAmount = -1000;
    account = Account(TEST_ACCOUNT_NAME, TEST_STARTING_BALANCE);
    bool success {};

    success = account.deposit(depositAmount);
    double actualBalance = account.getBalance();

    EXPECT_FALSE(success);
}
