#include <iostream>
//Test
#include "io.h"


//2.11
#include "Add.h"

////2.10
#define Print_Vic
#define My_NAME "Victor"


void doPrint()
{
	std::cout << "Inside doPrint()\n";
}

void doB()
{
	std::cout << "In doB()\n";
}

void doA()
{
	std::cout << "Starting doA()\n";
	doB();
	std::cout << "Ending doA()\n";
}

int foo()
{
	std::cout << "foo!\n";
	return 0;
}

//function askes user to enter an integer
//return value is the integer entered by user from keyboard
int getValueFromUser()
{
	std::cout << "Enter an Integer: ";
	int input{};
	std::cin >> input;

	return input;//returning the value to caller entered by user
}

int returnFive()
{
	return 5;
}

int add(int x, int y)
{
	return x + y;
}

void printValue(int x)
{
	std::cout << x << "\n";
}

void printValues(int x, int y)
{
	std::cout << x << "\n";
	std::cout << y << "\n";
}

void printDouble(int val)
{
	std::cout << val << " doubled is: " << val * 2 << "\n";
}

int doubleNumber(int x)
{
	return x * 2;
}

//function prototype
int tripleNumber(int x);



int main()
{
	/*Example 1
	std::cout << "Starting main()\n";
	doPrint();
	doPrint();
	std::cout << "Ending main()\n";*/

	//Example 1.2
	/*std::cout << "Ending main()\n";

	doA(); //main being caller, doA-callee but also caller for doB, doB being calle from within doA

	std::cout << "Ending main()\n";

	return 0;*/

	//example 1.3
	/*illegal to define functions insode another function 
		int foo()
	{
		std::cout << "foo!\n";
		return 0;
	}
	
	foo();*/

	//Example 2.1
	/*std::cout << returnFive() << "\n";
	std::cout << returnFive() + 2 << "\n";

	int num{ getValueFromUser() };
	std::cout << num << " doubled is: " << num * 2 << "\n";*/

	/*int x{ getValueFromUser() };
	int y{ getValueFromUser() };

	std::cout << x << " + " << y << " = " << x + y << '\n';*/

	//2.3
	/*int num{ getValueFromUser() };

	std::cout << num << " doubled is: " << num * 2 << '\n';*/

	//printValues(5, 8);
	//2.3.1
	/*int num{ getValueFromUser() };
	printDouble(num);

	printDouble(getValueFromUser());*/

	//2.3.2
	//std::cout << add(4, 5) << "\n";
	
	//2.3quiz section
	
	/*int num{};
	std::cin >> num;
	std::cout << doubleNumber(num) << "\n";*/

	/////2.4

	/////2.8
	//std::cout << "Doubling the sum of 4 and 5 is: " << doubleAdd(4, 5) << ".\n";
	
	/*int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';*/

////2.10 as well
/*#ifdef Print_Vic
	std::cout << "My name is : " << My_NAME << "\n";
#endif // Print_Vic
	
#ifndef Print_Jose
	std::cout << "My name is : Jose\n";
#endif // Print_Jose*/

	/*std::cout << "Doubling the addition of 4 and 5 is: " << doubleAdd(4, 5) << '\n';

	return 0;*/

	///TEST
	//1.1
	writeAnswer(readNumber());

	return 0;
}

int tripleNumber(int x)
{
	return 3 * x;
}