#include <iostream>
#include <vector>
#include <algorithm>

#include "Fraction.h"
#include "Cents.h"
#include "Car.h"
#include "GradeMap.h"
#include "String.h"

int main()
{
    /*Fraction f1(3, 4);
    Fraction f2(4, 1);

    f2.print();
    ++f2;
    f2.print();*/

    /*Fraction f3 = f1 * 2;
    Fraction f4 = f1 * f3;*/

    //f3.print();
    //f4.print();

    /*std::cout << f1 << '\n';
    std::cin >> f2;
    std::cout << f2 << '\n';*/

    /*Cents dime{ 10 };
    Cents nickel{ 5 };

    if (nickel > dime)
        std::cout << "a nickel is greater than a dime.\n";
    if (nickel >= dime)
        std::cout << "a nickel is greater than or equal to a dime.\n";
    if (nickel < dime)
        std::cout << "a dime is greater than a nickel.\n";
    if (nickel <= dime)
        std::cout << "a dime is greater than or equal to a nickel.\n";*/

    /*std::vector<Car> v{
    { "Toyota", "Corolla" },
    { "Honda", "Accord" },
    { "Toyota", "Camry" },
    { "Honda", "Civic" }
    };

    std::sort(v.begin(), v.end()); // requires an overloaded Car::operator<

    for (const auto& car : v)
        std::cout << car << '\n'; // requires an overloaded Car::operator<<
        */

    /*GradeMap grades{};

    grades["Joe"] = 'A';
    grades["Frank"] = 'B';

    std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
    std::cout << "Frank has a grade of " << grades["Frank"] << '\n';
    */

    String myString{ "Hello, World!" };
    //std::cout << myString.getString().length();
    std::string s{ myString(7,5) };
    
    std::cout << s;
    return 0;
}
