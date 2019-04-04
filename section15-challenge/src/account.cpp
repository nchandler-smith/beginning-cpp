#include "account.h"
#include <string>

Account::Account()
 : name{"Unnamed Account"} {

 }

std::string Account::getName() {
	return this->name;
}
