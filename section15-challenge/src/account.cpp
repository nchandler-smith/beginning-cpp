#include "account.h"
#include <string>

Account::Account(std::string name)
 : name{name} {

 }

std::string Account::getName() {
	return this->name;
}
