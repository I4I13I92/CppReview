#include <iostream>
#include <functional>
#include <array>
#include <iterator>
#include <algorithm>

struct Student{
	std::string name;
	int points;
};

void getTwoInts(int& a, int& b)
{
	std::cout << "Enter two integers.\n";
	std::cout << "1st integer: \n";
	std::cin >> a;

	std::cout << "Enter 2nd integer: \n";
	std::cin >> b;
}

char getOperator()
{
	std::cout << "Enter a valid operation(+, -, *, /).\n";
	char op{ ' ' };
	std::cin >> op;

	while ( op != '+' && op!= '-' && op != '*' && op != '/')
	{
		std::cout << "Enter a valid operation.\n";
		std::cin >> op;
	}

	return op;
}

int add(const int a, const int b)
{
	return a + b;
}
int subtract(const int a, const int b)
{
	return a - b;
}
int multiply(const int a, const int b)
{
	return a * b;
}
int divide(const int a, const int b)
{
	return a / b;
}

std::function<int(int, int)> getArithmeticFunction(char op)
{
	switch (op)
	{
	default:
	case '+':
		return add;
	case '-':
		return subtract;
	case '*':
		return multiply;
	case '/':
		return divide;
	}
}

int factorial(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * factorial(a - 1);
	}
}

int parseAndAdd(int a)
{
	int next_number_to_pass{ a / 10 };
	int num_to_add{ a % 10 };

	if (next_number_to_pass == 0)
	{
		return a;
	}
	else
	{
		return (num_to_add + parseAndAdd(next_number_to_pass));
	}
}

void intToBinary(int num)
{
	if (num == 0)
	{
		std::cout << num;
		return;
	}
	else if(num / 2 != 0)
	{
		intToBinary(num / 2);
	}

	std::cout << num % 2;
	
}

bool greaterThan(Student& a, Student& b)
{
	if (a.points < b.points)
	{
		return true;
	}
	else
	{
		return false;
	}
}
struct Season
{
	std::string name{};
	double avgTemperatue{};
};


int main()
{
	/*int first{ 0 };
	int second{ 0 };

	getTwoInts(first, second);
	char operation{ getOperator() };

	using arithmetic = std::function<int(int, int)>;
	arithmetic fcn = getArithmeticFunction(operation);

	std::cout << "You entered: " << first << " " << operation << " " << second << '\n';
	std::cout << "The result being : " << fcn(first, second);*/

	/*int a{ 4 };
	int b{ 9178 };
	int c{ 0 };


	std::cout << factorial(a) << '\n';
	std::cout << parseAndAdd(b) << '\n';
	intToBinary(c);*/

	/*
	std::array<Student, 8> arr{
  { { "Albert", 3 },
	{ "Ben", 5 },
	{ "Christine", 2 },
	{ "Dan", 8 }, // Dan has the most points (8).
	{ "Enchilada", 4 },
	{ "Francis", 10 },
	{ "Greg", 3 },
	{ "Hagrid", 5 } }
	};

	auto beg = arr.begin();
	auto end = arr.end();

	auto most_points = std::max_element(beg, end, [](Student& a, Student& b)
		{
			if (a.points < b.points) return true;
			return false;
});

	std::cout << most_points->name << " has the most points.";
	*/

	std::array<Season, 4> seasons{
		{{"Spring", 285.0},
	{"Summer", 296.0},
	{"Fall", 288.0},
	{"Winter", 263.0}}
	};

	auto beg = seasons.begin();
	auto end = seasons.end();

	std::sort(beg, end, [](Season& a, Season& b) 
	{
			return a.avgTemperatue < b.avgTemperatue;
	});

	for (const auto& season : seasons)
	{
		std::cout << season.name << '\n';
	}

	return 0;
}







