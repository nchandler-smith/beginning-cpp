#include "account.h"
#include <string>
#include <iomanip>
#include <sstream>


std::string doubleToString(double number, int precision) {
	std::stringstream numberStream;
	numberStream <<std::fixed << std::setprecision(precision) << number;
	return numberStream.str();
}

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

std::string Account::prettyPrint() {
	int precision {2};
	std::string balanceString = doubleToString(this->balance, precision);
	return "[Account: " + this->name + ": " + balanceString +"]";
}
