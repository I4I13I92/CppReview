#include <iostream>


int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is:" << x;
}

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}
int main()
{
	//#1
	/*
	int x{ 0 };
	x = readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);*/

	//#2
	/*int x{ 0 };
	int y{ 0 };
	x = readNumber(x);
	y = readNumber(y);
	writeAnswer(x / y);*/

	a();

	return 0;
}