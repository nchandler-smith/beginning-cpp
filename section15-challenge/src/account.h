#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
    private:
    static const constexpr char* defaultName {"Unnamed Account"};
    static const constexpr double defaultStartingBalance {};
    std::string name {};
    double balance{};

    public:
        Account(std::string name=defaultName, double balance=defaultStartingBalance);
        std::string getName();
        bool deposit(double amount);
        double getBalance();
};

#endif // _ACCOUNT_H_