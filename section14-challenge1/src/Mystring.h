#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                     // No-args constructor
    Mystring(const char *s);                        // Overloaded constructor
    Mystring(const Mystring &source);               // Copy constructor
    Mystring( Mystring &&source);                   // Move constructor
    ~Mystring();                                    // Destructor
    
    Mystring &operator=(const Mystring &rhs);       // Copy assignment
    Mystring &operator=(Mystring &&rhs);            // Move assignment

    bool operator==(const Mystring &rhs) const;     // equals
    bool operator!=(const Mystring &rhs) const;     // not equals
    bool operator<(const Mystring &rhs) const;      // less than
    bool operator>(const Mystring &rhs) const;      // greater than
    Mystring operator-() const;                     // to lower
    Mystring operator+(const Mystring &rhs) const;  // concat
    Mystring &operator+=(const Mystring &rhs);      // plus equals
    Mystring operator*(const int multiplier) const; // star
    Mystring &operator*=(const int multiplier);     // star equals
    Mystring operator++();                          // pre-increment

    void display() const;
    
    int get_length() const;                       // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_