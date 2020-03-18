#include <iostream>
#include <cstdint>


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

double ballHeight(double height, int seconds);

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

	//a();
	//Quiz chp 4#1

	/*std::cout << "Enter the height of the building where the ball will dropped from\n";
	double build_height{ 0 };
	std::cin >> build_height;
	std::cout << "Height entered: " << build_height << '\n';

	std::cout << "At 0 seconds, the ball is at height: " << ballHeight(build_height, 0) << " meters.\n";
	std::cout << "At 1 seconds, the ball is at height: " << ballHeight(build_height, 1) << " meters.\n";
	std::cout << "At 2 seconds, the ball is at height: " << ballHeight(build_height, 2) << " meters.\n";
	std::cout << "At 3 seconds, the ball is at height: " << ballHeight(build_height, 3) << " meters.\n";
	std::cout << "At 4 seconds, the ball is at height: " << ballHeight(build_height, 4) << " meters.\n";
	std::cout << "At 5 seconds, the ball is on the ground.";

	ballHeight(build_height, 0);*/

	//quiz 4 #2
	/*std::cout << "How old are you?\n";

	int age{};
	std::cin >> age;

	std::cout << "Allowed to drive a car in Texas [";

	if (age >= 16)
		std::cout << 'x';
	else
		std::cout << ' ';

	std::cout << "]\n";

	return 0;*/


}