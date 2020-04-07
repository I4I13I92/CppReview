#include <iostream>

void userMath(int a, int b, char c)
{
	switch (c)
	{
		case'+':
			std::cout << "Result of addition:" << a + b << "\n";
			break;
		case'-':
			std::cout << "Result of subtraction:" << a - b << "\n";
			break;
		case'*':
			std::cout << "Result of multiplication:" << a * b << "\n";
			break;
		case'/':
			std::cout << "Result of division:" << a / b << "\n";
			break;
		case'%':
			std::cout << "Result of remainder division:" << a % b << "\n";
			break;
		default:
			std::cout <<"User enterd invalid operation";
	}
	return;
}