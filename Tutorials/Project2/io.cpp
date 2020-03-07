#include <iostream>
#include "io.h"

int readNumber()
{
	int x{};
	std::cout << "Entet integer value: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "Printed value is: " << x << "\n";
}