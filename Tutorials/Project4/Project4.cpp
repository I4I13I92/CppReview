#include <iostream>

///4.6.1
#include <cstdint>
//4.8.2
#include <iomanip>

int main()
{
    /*4.3.2*/
    /*int x{7};
    std::cout << "x is " << sizeof(x) << " bytes\n";
    std::cout << "x's value is: " << x << '\n';

    signed short int s; 
    signed int i;
    signed long int l;
    signed long long int ll;*/

    /////4.3.3
    //std::cout << 8 / 5;

    /////4.4.1
    /*unsigned short x{ 0 };
    std::cout << "x was: " << x << '\n';

    x = -1;
    std::cout << "x is now: " << x << '\n';

    x = -2;
    std::cout << "x is now: " << x << '\n';*/

    ////4.5.2
    /*unsigned int x{ 3 };
    unsigned int y{ 5 };
    std::cout << x - y << "\n";*/

    ///4.6.1
    /*std::int16_t i(5);//should be avoided!
    std::cout << i;*/

    ////4.8.1
    /*std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';*/

    ///4.8.2
    /*std::cout << std::setprecision(16);
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';*/

    //4.8.3
    /*double d{ 0.1 };
    std::cout << d << '\n';
    std::cout << std::setprecision(17);
    std::cout << d << '\n';*/

    ///4.10.1
    /*std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x;

    if (x == 0)
    {
        std::cout << "Entered zero, Congrats!\n";
    }
    else if(x > 0)
    {
        std::cout << "Entered a postive number\n";
    }
    else
    {
        std::cout << "Entered a negative number\n";
    }
    {

    }*/

    /*int x{};
    std::cout << "Enter a single digit and we'll find out if it's a prime.";
    std::cin >> x;

    if (x == 2)
    {
        std::cout << "The digit is prime!\n";
    }
    else if (x == 3)
    {
        std::cout << "The digit is prime!\n";
    }
    else if (x == 5)
    {
        std::cout << "The digit is prime!\n";
    }
    else if (x == 7)
    {
        std::cout << "The digit is prime!\n";
    }
    else
    {
        std::cout << "The digit is even!\n";
    }*/

    ///4.11.1
    /*char ch2{ 'a' };
    char ch1{ 97 };

    std::cout << ch2 << '\n';
    std::cout << ch1 << '\n';
    std::cout << 'c\n';
    std::cout << static_cast<int>(ch2) << '\n';*/

    ////4.11.2
    /*std::cout << "Input a keyboard character: ";
    char ch{};
    std::cin >> ch;
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

    std::cin >> ch;
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';*/

    return 0;
}