#include <iostream>
#include <cstring>
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

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    bool stringsAreEqual {};
    stringsAreEqual = std::strcmp(lhs.get_str(), rhs.get_str()) == 0;
    return stringsAreEqual;
}

bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return !(lhs == rhs);
}

bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return lhs.get_str() < rhs.get_str();
}

bool operator>(const Mystring &lhs, const Mystring &rhs) {
    bool notEqualTo {lhs != rhs};
    bool notLessThan {!(lhs < rhs)};
    return notEqualTo && notLessThan;
}

Mystring operator-(const Mystring &obj) {
    int tempLength {obj.get_length()};
    char *tempString = new char[obj.get_length()+1];

    for(size_t i {}; i < tempLength; i++) {
        *(tempString + i) = std::tolower(obj.get_str()[i]);
    }
    Mystring returnValue {tempString};

    delete [] tempString;
    return returnValue;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    int tempLength {lhs.get_length() + rhs.get_length() + 1};
    char *tempString = new char[tempLength];

    std::strcpy(tempString, lhs.get_str());
    std::strcat(tempString, rhs.get_str());

    Mystring concat {tempString};
    delete [] tempString;
    return concat;
}

Mystring& operator+=(Mystring &lhs, const Mystring &rhs){
    return lhs = lhs + rhs;
}

Mystring operator*(const Mystring &lhs, const int multiplier){
    Mystring returnValue {};
    for(size_t i {}; i < multiplier; i++) {
        returnValue += lhs.get_str();
    }
    return returnValue;
}

Mystring& operator*=(Mystring &lhs, const int multiplier){
    return lhs = lhs * multiplier;
}

Mystring operator++(Mystring &obj){
    for(size_t i {}; i < obj.get_length(); i++) {
        *(obj.str + i) = std::toupper(obj.str[i]);
    }
    return obj;
}

Mystring operator++(Mystring& obj, int) {
    Mystring temp = obj;
    ++obj;
    return temp;
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

