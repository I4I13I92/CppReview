#include <iostream>

int doubleAdd(int x, int y)
{
	return 2 * (x + y);
}

int getInteger()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}