#include "account.h"
#include <string>

Account::Account()
 : name{"Unnamed Account"}, balance{0.0}{
 }

std::string Account::getName() {
	return this->name;
}

double Account::getBalance() {
	return this->balance;
}
