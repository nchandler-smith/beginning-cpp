#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
    private:
    std::string name {};
    double balance{};

    public:
        Account();
        Account(std::string name);
        Account(std::string name, double balance);
        std::string getName();
        double getBalance();
};

#endif // _ACCOUNT_H_