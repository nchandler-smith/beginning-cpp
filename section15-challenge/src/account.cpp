#include "account.h"
#include <string>

 Account::Account(std::string name, double balance)
 : name{name}, balance{balance} {
 }

std::string Account::getName() {
	return this->name;
}

double Account::getBalance() {
	return this->balance;
}
