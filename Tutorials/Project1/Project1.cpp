#include <iostream>//prepocrocessor directive

int main()
{
    /*Comments always felt forced when I wrote them, 
    I need to be better with them*/


    /*int a {};
    int b {3};
    double c {3.7};
    float d { 0 };*/

   /* std::cout << "Enter a number for a \n"; // << insertion operator
    std::cin >> a; // >>, extraction operator

    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "c is: " << c << std::endl;
    std::cout << "d is: " << d << std::endl;

    std::cout << "values of a, b, c, and d respectively: " 
        << a << ", " << b << ", " << c << ", and " << d<< std::endl;*/

    //test 1

    //program to ask for input(int), then multiply by 2
    int x{ 0 };

    std::cout << "Enter an integer: ";
    std::cin >> x;

    //std::cout << "Entered integer: " << x << '\n';
    std::cout << "Double that number: " << x * 2 << '\n';
    std::cout << "Triple that number: " << x * 3 << '\n';

    return 0;
}