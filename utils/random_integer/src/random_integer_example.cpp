#include "random_integer.h"
#include <iostream>

int main()
{
    RandomInteger* randomInteger = new RandomInteger();
    for(int i=0; i<5; i++)
        std::cout << randomInteger->generate(1, 10) << "\n";
    delete randomInteger;
}
