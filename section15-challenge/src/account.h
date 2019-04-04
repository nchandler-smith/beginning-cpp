#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
    private:
    std::string name {};
    double balance{};

    public:
        Account();
        std::string getName();
        double getBalance();
};

#endif // _ACCOUNT_H_