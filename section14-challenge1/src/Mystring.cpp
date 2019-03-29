#include <iostream>
#include <cstring>
#include <string>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

bool Mystring::operator==(const Mystring &rhs) const{
    int compareResult {};
    bool isEqual {};
    compareResult = std::strcmp(this->str, rhs.str);
    isEqual = compareResult == 0;
    return isEqual;
}

bool Mystring::operator!=(const Mystring &rhs) const{
    return !(*this == rhs);
}

bool Mystring::operator<(const Mystring &rhs) const{
    std::string left {*this->get_str()};
    std::string right {*rhs.get_str()};
    return left < right;
}

bool Mystring::operator>(const Mystring &rhs) const{
    return !(*this == rhs) && !(*this < rhs);
}

Mystring Mystring::operator-() const {
    Mystring myReturn {*this};
    for(size_t i {}; i < myReturn.get_length(); i++) {
        myReturn.str[i] = std::tolower(myReturn.str[i]);
    }
    return myReturn;
}

Mystring Mystring::operator+(const Mystring &rhs) const {
    int thisLength {this->get_length()};
    int rhsLength {rhs.get_length()};
    int concatStringLength {thisLength + rhsLength + 1};
    
    char *concatString = new char[concatStringLength];
    std::strcpy(concatString, this->str);
    std::strcat(concatString, rhs.get_str());
    
    Mystring myReturn {concatString};
    delete [] concatString;
    return myReturn;
}

Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;
    return *this;
}

Mystring Mystring::operator*(const int multiplier) const {
    Mystring returnValue {};
    for(size_t i {}; i < multiplier; i++) {
        returnValue += *this;
    }
    return returnValue;
}

Mystring &Mystring::operator*=(const int multiplier) {
    *this = *this * multiplier;
    return *this;
}

Mystring Mystring::operator++() {
    for(size_t i {}; i < this->get_length(); i++){
        this->str[i] = std::toupper(this->str[i]);
    }
    return *this;
}

Mystring Mystring::operator++(int) {
    Mystring returnValue = *this;
    ++*this;
    return returnValue;
}
 
// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

