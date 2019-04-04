#include "account.h"
#include <string>

 Account::Account(std::string name, double balance)
 : name{name}, balance{balance} {
 }

std::string Account::getName() {
	return this->name;
}

bool Account::deposit(double amount) {
	balance += amount;
}

double Account::getBalance() {
	return this->balance;
}
