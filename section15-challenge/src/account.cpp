#include "account.h"
#include <string>

 Account::Account(std::string name, double balance)
 : name{name}, balance{balance} {
 }

std::string Account::getName() {
	return this->name;
}

bool Account::deposit(double amount) {
	if(amount < 0)
		return false;
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if(balance - amount < 0)
		return false;
	balance -= amount;
	return true;
}

double Account::getBalance() {
	return this->balance;
}
