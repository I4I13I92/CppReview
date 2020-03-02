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
void pointers(int *m, int n)
{
	int* m += n;
	int n += n;
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

	int* a = 5;
	int b = 3;

	pointers(a, b);
	cout << "after calling pointers function \n";
	cout << "a is: " << a << "\n";
	cout << "b is: " << b << "\n";



}
