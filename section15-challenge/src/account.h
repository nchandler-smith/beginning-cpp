#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
    private:
    std::string name {};

    public:
        Account();
        std::string getName();
};

#endif // _ACCOUNT_H_