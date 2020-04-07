#include <iostream>
#include <string>
#include <sstream>

#include "Rectangle.h"
#include "Triangle.h"

double add(double a, double b);
int add(int a, int b);

template <class T>
T sum(T a, T b)
{
    return a + b;
}

template<class T, class U>
bool are_equal(T a, U b)
{
    return (a == b);
}

namespace myNamespace
{
    int a = 5;
    double b = 5.0;
}

using namespace myNamespace;

int main()
{
    /*std::string mystr;
    std::cout << "What is your name?: ";

    std::getline(std::cin, mystr);

    std::cout << "Hello, " << mystr << ".\n";
    std::cout << "What is your favorite sports team? ";

    std::getline(std::cin, mystr);
    std::cout << "I like " << mystr << " too!\n";*/

    //std::cout << are_equal<int, double>(a, b) << '\n';
    
    /*Rectangle rect;
    Rectangle recta{ 3,4 };
    Rectangle* rectb, *rectc, *rectd;

    rectb = &recta;
    rectc = new Rectangle(7, 6);
    rectd = new Rectangle(8, 9);

    std::cout << recta.get_area() <<'\n';
    std::cout << rectb->get_area() << '\n';
    std::cout << rectc->get_area() << '\n';
    std::cout << rectd->get_area() << '\n';

    delete rectc;
    delete rectd;*/

    Triangle tri;
    Polygon *pol;
    pol = &tri;

    pol->set_height(10);
    pol->set_width(7);

    std::cout << tri.area() << '\n';

    return 0;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b)
{
    return a + b;
}
