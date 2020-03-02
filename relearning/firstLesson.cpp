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
void pointers(int* a, int& b, int c)
{
	*a += c;
	b += c;
	c *= 2;
	
	cout << "inside pointers function\n";
	cout << "a is: " << *a << "\n";
	cout << "b is: " << b << "\n";
	cout << "c is: " << c << "\n\n";
}

int main() {
//basic pointers
	/*int x = 5;
	int y = 7;

	int* xx = &x;
	int* yy = &y;

	int* xxx = new int(3);
	int* yyy = new int(4);

	cout << "pointer xx stores addres: " << xx;
	cout << " pointer yy stores address: " << yy << "\n";

	cout << "pointer xx points to: " << *xx;
	cout << " pointer yy points to: " << *yy;

	*xx = 8;
	*yy = 9;

	cout << "After changes...\n";
	cout << " x stores to: " << x;
	cout << " y stores to: " << y;

	delete xxx;
	delete yyy;*/

	int* x = new int(5);
	int y = 7;
	int z = 5;

	cout << "before calling pointers function\n";
	cout << "x is: " << *x << "\n";
	cout << "y is: " << y << "\n";
	cout << "z is: " << z << "\n\n";


	pointers(x, y, z);

	cout << "after calling pointers function\n";
	cout << "x is: " << *x <<"\n";
	cout << "y is: " << y << "\n";
	cout << "z is: " << z << "\n\n";

	delete x;


}
