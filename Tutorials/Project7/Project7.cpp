// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//return by address
int doubleValue(int x)
{
    int value{ x * 2 };
    return value;
}

//return by address
/*int* tripleValue(int y)
{
    //not acceptable, must only do so when with formal parameter!
    int value{ y * 3 };
    return &value;
}*/

//return by reference
/*int& quadValue(int x)
{
    //same rule as returning by address!
    int value{ x * 2 };
    return value;
}*/

int sumTo(int x)
{
    return x;
}
//7.6-function overloading
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

//7.7 default arguemnets, if must do so in forward declaration within a header 
void printValues(int x, int y = 10)
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << x << '\n';
}

void printValues(int x = 10, int y = 20, int z = 30)
{
    std::cout << "Values: " << x << " " << y << " " << z << '\n';
}

//7.8function pointers
int foo(int x)
{
    std::cout << x << '\n';
    return x;
}

int goo(int x)
{
    std::cout <<"Enter value for x: ";
    std::cin >> x;
    std::cout << x << '\n';
    return x;
}

int main(int argc, char **argv)
{
    //7.8
    /*int (*fcnPtr)(int) { foo };
    fcnPtr(5);
    fcnPtr = goo;
    fcnPtr(6);
    return 0;*/

    //7.13 command line arguements
    std::cout << "There are " << argc << " arguemnets:\n";
    for (int count { 0 }; count < argc; ++count)
    {
        std::cout << count << " " << argv[count] << "\n";
    }
    return 0;
}
