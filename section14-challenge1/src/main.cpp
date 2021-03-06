// Section 14
// Challenge
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    

    cout << boolalpha << endl;
    cout << "\n---------------" << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "a==b " << (a==b) << endl;         // true
    cout << "a!=b " << (a!=b) << endl;          // false
    
    cout << "\n---------------" << endl;
    b = "george";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a==b " << (a==b) << endl;         // true
    cout << "a!=b " << (a!=b) << endl;          // false
     cout << "a<b" << (a<b) << endl;          // true
    cout << "a>b" << (a>b) << endl;           // false
    
    cout << "\n---------------" << endl;
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << "FRANK becomes " << s1 << endl;               // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****       
    
    s1 += "-----";                        // frank*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << "s2: " << s2;
    cout << " becomes " << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    cout << "s3: " << s3;
    s3 *= 5;
    cout << " becomes " << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK
    
    s = -s; 
    cout << s << endl;                  // frank
    
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK
    
    s = "Frank";
    cout << "Post Increment before: " << s++ << endl;
    cout << "Post Increment after: " << s << endl;                  // FRANK
    
    s = -s;
    cout << s << endl;                  // frank
    result = s++;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // frank
    return 0;
}
