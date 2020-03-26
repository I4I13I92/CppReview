#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f1(3, 4);
    Fraction f2(4, 1);

    f1.print();
    f2.print();

    Fraction f3 = f1 * 2;
    Fraction f4 = f1 * f3;

    //f3.print();
    //f4.print();

    std::cout << f1 << '\n';
    std::cin >> f2;
    std::cout << f2 << '\n';
}
