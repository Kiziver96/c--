#include <iostream>
#include "op.h"

int main()
{
    Myint a(3, 4);
    Myint b(1, 2);
    Myint c = a + b;
    display(c);
    Myint d = a - b;
    display(d); 
    Myint e = a * b;
    display(e); 

    if (a == Myint(3, 4)) {
        std::cout << "a is equal to (3, 4)" << std::endl;
    }

    return 0;
}