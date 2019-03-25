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

// Equals overload
bool Mystring::operator==(const Mystring &rhs) const{
    int compareResult {};
    bool isEqual {};
    compareResult = std::strcmp(this->str, rhs.str);
    isEqual = compareResult == 0;
    return isEqual;
}

// Not equals overload
bool Mystring::operator!=(const Mystring &rhs) const{
    return !(*this == rhs);
}

// Less than overload
bool Mystring::operator<(const Mystring &rhs) const{
    std::string left {*this->get_str()};
    std::string right {*rhs.get_str()};
    return left < right;
}

// Greater than overload
bool Mystring::operator>(const Mystring &rhs) const{
    return !(*this == rhs) && !(*this < rhs);
}

// Unary minus overload
Mystring Mystring::operator-() const {
    Mystring myReturn {*this};
    for(size_t i {}; i < myReturn.get_length(); i++) {
        myReturn.str[i] = std::tolower(myReturn.str[i]);
    }
    return myReturn;
}

// Binary plus overload
Mystring Mystring::operator+(const Mystring &rhs) const {
    int thisLength {this->get_length()};
    int rhsLength {rhs.get_length()};
    int concatStringLength {thisLength + rhsLength + 1};
    
    char *concatString = new char[concatStringLength];
    std::strcpy(concatString, this->str);
    std::strcat(concatString, rhs.get_str());
    
    Mystring myReturn {concatString};
    return myReturn;
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

