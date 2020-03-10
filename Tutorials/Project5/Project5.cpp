#include <iostream>

int main()
{
	///5.7.1
	/*int x{ 5 };
	int y{ 7 };

	if (!(x > y))
	{
		std::cout << "x is greater than y\n";
	}
	else
	{
		std::cout << "x is equal to or greater than x\n";
	}*/

	///5.7.2
	std::cout << "Enter a number\n";
	int value{};
	std::cin >> value;

	if (value > 0 && value < 10)
	{
		std::cout << "Hello!\n";
	}
	else
	{
		std::cout << "Hello world!";
	}
	return 0;
}