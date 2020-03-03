#include <iostream>
using namespace std;


//basic function
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//passing pointers into functions
void pointers(int* a, const int& b, int c)
{
	*a += c;
	c *= b;

	cout << "inside pointers function\n";
	cout << "a is: " << *a << "\n";
	cout << "b is: " << b << "\n";
	cout << "c is: " << c << "\n\n";
}

