#include <iostream>
#include "Math.h"



int main()
{
	std::cout << "Enter 2 integers and a mathematical operation to be performed between the two\n";
	int one{};
	int two{};
	char operation{};


	std::cout << "Enter 1st integer: ";
	std::cin >> one;
	std::cout << "\n";

	std::cout << "Enter 2nd integer: ";
	std::cin >> two;
	std::cout << "\n";

	std::cout << "Enter operand(+, -, *, /, or %): ";
	std::cin >> operation;

	userMath(one, two, operation);

	return 0;
}