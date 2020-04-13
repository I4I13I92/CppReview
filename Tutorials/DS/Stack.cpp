#include "Stack.h"


//constructor
Stack::Stack()
{
	this->length = 0;
	this->capacity = 8;							//set the capacity to be initially 8
	this->stack = new int[this->capacity];      //use the capacity to determine the initial value of the dynaic array
}

//Class destructor
Stack::~Stack()
{
	delete[] this->stack;						//delete the stack
}

//remove item/value from top of stack  
int Stack::pop()
{
	return this->stack[--this->length];			//return value at the top of the stack, decrement length and use length's decremented 
												//value to respectivley pop the top element from the stack
}

void Stack::insert(int n)
{
	if (this->isEmpty())						//check to see if stack is empty
	{
		this->stack[this->length] = n;			//use the length of stack(0), to insert value into 1st element
		this->length++;							//increase the length of stack
	}
	else if (this->length == this->capacity)	//check to see if the length has reached capacity
	{
		this->reSize();							//resize the stack
		this->stack[++this->length - 1];		//first increment length to access next element, 
												//but subtract by 1 to offset difference between element and length respectively 
	}
	else
	{
		this->stack[++this->length - 1];		//same logic as else if block from above, though no resizing needed for this condition
	}
}

//Function to chack value thats at the top of the stack 
int Stack::checkTop()
{
	if (this->isEmpty())				//check to see if the stack is empty or not, return -1 if it's empty
	{
		return -1;
	}
	else
	{
		return this->stack[this->length - 1];		//retrun value at top of stack
	}
}

//Check to see if stack is empty
bool Stack::isEmpty()
{
	if (this->length == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//resize the stack
void Stack::reSize()
{
	int* newStack = new int[this->capacity * 2];			//pointer to point to dynamically allocated data which is twice the previous capacity

	for (int i = 0; i < this->capacity; i++)				//begin iterating through both arrays to copy over data from old array to newly constructed array
	{
		newStack[i] = this->stack[i];
	}

	this->capacity *= 2;									//increase capacity by double its length
	delete[] this->stack;									//release previous data 
	this->stack = newStack;									//have this->stack point to updated stack
	newStack = nullptr;
}

//function to return current length/size of stack
int Stack::getSize()
{
	return this->length;
}