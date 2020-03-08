#include <iostream>

void printValue(int value)
{
	std::cout << value << '\n';
}

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	//3.7
	/*
	printValue(5);
	printValue(6);
	printValue(7);*/

	//3.8
	/*int x{ 1 };
	std::cout << x << " ";

	x = x + 2;
	std::cout << x << " ";

	x = x + 3;
	std::cout << x << " ";*/

	//3.9
	a();
	b();

	return 0;

}