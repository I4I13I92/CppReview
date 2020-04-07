#include <iostream>
#include <iterator>
#include <array>
#include <vector>

struct Something
{
	int n;
	float f;
};

void passDArray(double arr[3])
{
	arr[0] = 11;
	arr[1] = 11;
	arr[2] = 11;
}

namespace StudentNames 
{
	enum StudentNames
	{
		Kenny,
		Victor,
		Vicky,
		Kimberly,
		Cody,
		Yesenia
	};
}

int main()
{
	//P.1
	/*int primus[5];
	primus[0] = 5;
	primus[1] = 8;
	primus[2] = 7;
	primus[3] = 10;
	primus[4] = 3;

	double magnus[3];
	magnus[0] = 4.9;
	magnus[2] = 5.4;
	magnus[1] = 6.7;

	std::cout << primus[4] << '\n';
	std::cout << magnus[2] << '\n';

	//P.2
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int testScores[6];
	testScores[StudentNames::Victor] = 97;
	passDArray(magnus);
	std::cout << magnus[2] << '\n';
	std::cout << "Magnus array is size of: " << std::size(magnus) << " elements\n";
	*/

	/*int array[]{ 1,2,3,4,5 };
	std::cout << &array[0] << '\n';
	std::cout << &array[1] << '\n';

	std::cout << array[0] << '\n';
	std::cout << *(array+1) << '\n';*/

	///6.9 dynamic memory

	/*int *int_ptr = new int;
	*int_ptr = 5;

	std::cout << *int_ptr << "\n";
	std::cout << int_ptr << "\n";
	std::cout << &int_ptr << "\n";

	delete int_ptr;*/

	//6.10 Consts and ptrs
	/*const int value1 = 5;
	int value2 = 7;
	const int * const ptr = &value1;*/
	

	//6.11 References
	/*int x{ 5 };
	int &y{ x };
	int &z{ y };

	std::cout << x << '\n';
	std::cout << &y << '\n';
	std::cout << &z << '\n';

	z++;
	y++;
	std::cout << x << '\n';*/

	/*int x = 5;
	const int& ref1 = x;

	const int y = 7;
	const int& ref2 = y;
	const int& ref3 = 6;*/

	/*illegal
	ref1 = 7;
	ref2 = 8;
	ref3 = 10;
	y = 0;

	x = 0;*/

	//6.12
	/*constexpr int fibonacci[]{ 0,1,1,2,3,5,8,13 };
	for(const auto &number : fibonacci)
	{
		std::cout << number;
		std::cout << '\n';
	}*/

	//6.13 void pointer
	/*int x = 4;
	double y = 9.8;
	void* ptr;
	Something sValue;

	ptr = &y;
	double* dPtr{ static_cast<double*>(ptr) };
	std::cout << *dPtr << '\n';
	return 0;*/

	//6.14 Pointer to Pointer
	/*int x = 5;
	int* ptr = &x;
	int** pptr = &ptr;

	std::cout << x << '\n';
	std::cout << *ptr << '\n';
	std::cout << **pptr << '\n';*/

	//6.15 std::array
	/*std::array<int, 6> myArray{ 1,2,3,4,5,6 };
	std::array my2Array{ 1,2,3 };
	my2Array.at(2) = 0;
	std::cout << myArray.size() << '\n';


	*/
 
	//6.16 Vectors
	/*std::vector<int> vector1{ 1,2,3,4,5,6,7,8,9 };
	std::cout << "Length of the vector is: " << vector1.size() << '\n';


	vector1.resize(5);
	std::cout << "Length of the vector is now: " << vector1.size() << '\n';
	*/
	
	//6.17 Iterators
	std::array array{ 1,2,3,4,5 };
	auto begin{ array.begin() };
	auto end{ array.end() };

	for (auto p{ begin }; p != end; ++p)
	{
		std::cout << *p << ' ';
	}

	std::cout << '\n';



	return 0;
}