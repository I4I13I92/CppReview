#include <iostream>
#include <iterator>

namespace Animal
{
	enum Animals
	{
		CHICKEN,
		DOG,
		CAT,
		ELEPAHANT,
		DUCK,
		SNAKE,
		RHINO,
		OSTRITCH,
		MAX_ANIMALS

	};
}

int* find(int* a, int* b, int valueToLookFor)
{
	for (a; a != b; ++a)
	{
		if (*a == valueToLookFor)
		{
			return a;
		}
	}
	return b;
}



int main()
{
	//6.2
	/*double temperatures[365]{};
	int legs[Animal::MAX_ANIMALS] = { 2,4,4,4,2,0,4,2 };


	std::cout << "A rhino has " << legs[Animal::ELEPAHANT] << " legs.\n";*/

	//6.3
	/*int array[]{ 4,6,7,3,8,2,1,9,5 };
	int array_size{ static_cast<int>(std::size(array)) };
	int user_digit{};

	std::cout << "Enter a digit between 1 and 9\n";
	std::cin >> user_digit;

	while (user_digit < 1 || user_digit > 9)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Re-enter a digit, please!\n";
			std::cin >> user_digit;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			std::cout << "Re-enter a digit, please!\n";
			std::cin >> user_digit;
		}
	}

	int index{};

	for (int i = 0; i < array_size; ++i)
	{
		if (array[i] == user_digit)
		{
			index = i;
		}
		std::cout << array[i] << " ";
	}
	std::cout << '\n';
	std::cout << "This is the index of the user_digit " << index << " .\n";
	*/

	/*int scores[]{ 84, 92, 76, 81, 56 };
	int numStudents{ static_cast<int>(std::size(scores)) };

	int maxScore{ 0 }; // keep track of our largest score
	int maxScoreIndex{ 0 };

	for (int student{ 0 }; student < numStudents; ++student)
		if (scores[student] > maxScore)
		{
			maxScore = scores[student];
			maxScoreIndex = student;
		}
			
	std::cout << "The best score was " << maxScore << '\n';
	std::cout << "The index of the max score is: " << maxScoreIndex << '\n';*/

	//bubble sort
	/*
	int array[]{ 1,3,2,4,5,6,7,8,9 };
	
	int array_size{ static_cast<int>(std::size(array)) };
	int counter = 0;

	for (int i{ 0 }; i < array_size - 1; ++i)
	{
		int counter_no_swaps{ 0 };

		for (int j = 0; j < (array_size - 1) - i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				int swap{ array[j] };
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
			else
			{
				counter_no_swaps++;
			}
		}
		std::cout << counter_no_swaps << '\n';

		if (counter_no_swaps == (array_size - 1)- i)
		{
			std::cout << "No need for swapping anymore, array already sorted.\n";
			std::cout << "Completed on " << i << " iteration.\n";
			break;
		}

	}
		
	for (int i = 0; i < array_size; ++i)
	{
		std::cout << array[i] << " ";
	}*/

	/*int arr[]{ 2, 5, 4, 10, 8, 16, 40 };

	 Search for the first element with value 20.
	int* found{ find(std::begin(arr), std::end(arr), 20) };

	 If an element with value 20 was found, print it.
	if (found != std::end(arr))
	{
		std::cout << *found << '\n';
	}*/

	//6.9
	/*int arr_size{ 0 };

	std::cout << "How many names would you like to enter?\n";
	std::cin >> arr_size;
	std::cout << "You entered: " << arr_size << '\n';

	std::string *names = new std::string[arr_size];

	for (int i{ 0 }; i < arr_size; ++i)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cout << '\n';
	}


	delete[] names;*/

	/*6.12
	std::string names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "enter a name to find: ";

	std::string entered_name;
	std::cin >> entered_name;

	bool registered{false};

	for (auto name : names)
	{
		if (name == entered_name)
		{
			registered = true;
		}
	}
	
	if (registered)
	{
		std::cout << "Here is the entered name: " << entered_name << '\n';
	}
	else
	{
		std::cout << "Entered name is not registered\n";
	}
	*/6.12
	
	return 0;
}