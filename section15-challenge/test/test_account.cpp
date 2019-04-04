#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/account.h"

#include <string>
#include <iomanip>
#include <sstream>

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
    std::string expectedAccountName = TEST_ACCOUNT_NAME;

    account = Account(expectedAccountName);
    std::string actualAccountName {account.getName()};

    EXPECT_EQ(expectedAccountName, actualAccountName);
}

TEST_F(AccountTest, testCreateAccountWithSpecifiedBalanceHasThatBalance) {
    double expectedAccountBalance = TEST_STARTING_BALANCE;

    account = Account(TEST_ACCOUNT_NAME, expectedAccountBalance);
    double actualAccountBalance {account.getBalance()};

    EXPECT_EQ(expectedAccountBalance, actualAccountBalance);
}

TEST_F(AccountTest, testDepositAmountGreaterThan0AddsAmountToBalance) {
    double depositAmount {5000};
    double expectedUpdatedBalance = TEST_STARTING_BALANCE + depositAmount;

    account.deposit(depositAmount);
    double actualUpdatedBalance = account.getBalance();

    EXPECT_EQ(expectedUpdatedBalance, actualUpdatedBalance);
}

TEST_F(AccountTest, testDepositAmountGreaterThan0ReturnsTrue) {
    double validDepositAmount {1};
    bool success {};

    success = account.deposit(validDepositAmount);

    EXPECT_TRUE(success);
}

TEST_F(AccountTest, testDepositAmountLessThan0ReturnsFalse) {
    double invalidDepositAmount {-1};
    bool success {};

    success = account.deposit(invalidDepositAmount);

    EXPECT_FALSE(success);
}

TEST_F(AccountTest, testWithdrawAmountFromAccountSubtractsAmountFromBalance) {
    double withdrawAmount = {100};
    double expectedUpdatedBalance = account.getBalance() - withdrawAmount;
    
    account.withdraw(withdrawAmount);
    double actualUpdatedBalance = account.getBalance();

    EXPECT_EQ(expectedUpdatedBalance, actualUpdatedBalance);
}

TEST_F(AccountTest, testWithdrawAmountLessThanAccountBalanceReturnsTrue) {
    double withdrawAmount = account.getBalance() - 0.01;

    bool success = account.withdraw(withdrawAmount);

    EXPECT_TRUE(success);
}

TEST_F(AccountTest, testWithdrawAmountMoreThanAccountBalanceReturnsFalse) {
    double withdrawAmount = account.getBalance() + 0.01;

    bool success = account.withdraw(withdrawAmount);

    EXPECT_FALSE(success);
}

TEST_F(AccountTest, testPrettyPrintReturnsAccountNameBalance) {
    std::string name = TEST_ACCOUNT_NAME;
    std::stringstream balance;
    balance << std::fixed << std:: setprecision(2) << TEST_STARTING_BALANCE;
    std::string balanceString = balance.str();
    std::string expectedValue = "[Account: " + name + ": " + balanceString + "]";
    std::string actualValue {};

    actualValue  = account.prettyPrint();

    EXPECT_EQ(expectedValue, actualValue);
}
