#include <iostream>
//6.2.2----namespaces
#include "foo.h"
#include "goo.h"

//6.8.1
#include "CONSTANTS.H";


int main()
{
	//std::cout << goo::doSomething(3, 4) << '\n';

	///6.3 Quiz
	/*int x{};
	int y{};

	std::cout << "Enter an Integer: ";
	std::cin >> x;
	std::cout << "\n";

	std::cout << "Enter a Larger Integer: ";
	std::cin >> y;
	std::cout << '\n';

	
	if (x > y)
	{
		int hold{ y };
		y = x;
		x = hold;
		std::cout << "swapped values \n";
		//hold is destroyed here
	}

	std::cout << "The smaller integer is: " << x << '\n';
	std::cout << "The larger integer is: " << y << '\n';*/

	std::cout << "Enter a radius: ";
	int radius{};
	std::cin >> radius;

	std::cout << "The circumference is: " << 2 * radius * constants::pi << '\n';


	//both x and y are destroyed here
	return 0;
}