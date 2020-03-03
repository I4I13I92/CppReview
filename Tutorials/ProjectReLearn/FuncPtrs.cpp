#include <iostream>
#include <vector>
#include <functional>

using namespace std;

//function declaration for lambda expression
void ForEach(const vector<int>& vec, const function<void(int)>& func)
{
	for (int v : vec)
	{
		func(v);
	}
}

//function declaration for function pointer
void foreach(const vector<string>& vec, void(*func)(string))
{
	for (string v : vec)
	{
		func(v);
	}
}

void printString(string s)
{
	cout << s << endl;
}

void HelloWorld()
{
	cout << "Hello World" << endl;
}

void HelloVictor()
{
	cout << "Hello Victor" << endl;
}

void HelloStranger(string name)
{
	cout << "Hello " << name << endl;
}

int main()
{
	/*vector<int> values = { 1,5,4,2,3 };
	int a = 3;
	auto lambda = [a](int value) {if (value > a) { cout << "Value:" << value << endl; }};

	ForEach(values, lambda);*/

	/*void(*victor)();// = HelloWorld also works!

	victor = HelloVictor;

	auto function = HelloWorld;

	function();
	victor();*/

	/*typedef void(*strangerFunction)(string);

	strangerFunction function = HelloStranger;

	function("Victor");
	function("Miguel");
	function("Jose");
	function("Noel");
	function("Julian")*/

	vector<string> names = { "Victor", "Miguel", "Jose", "Noel", "Julian" };
	foreach(names, printString);


	//cin.get();

}