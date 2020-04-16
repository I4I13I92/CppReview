#include "Deque.h"


//default constructor
Deque::Deque()
{
	this->length = 0;							//set the length to 0
	this->capacity = 8;							//set the initail capacity to 8
	this->deque = new int[this->capacity];		//use the initial capacity to determine dynamically allocated data
	this->front = 0;							//only set to avoid warnings, correctly set both when 1st push(front or rear) is called
	this->rear = this->capacity - 1;
}

//destructor to delete dynamic memory 
Deque::~Deque()
{
	delete[] this->deque;
	this->deque = nullptr;
}

//insert a value at the front of the deque
void Deque::pushFront(int val)
{
	if (this->isEmpty())												 //check to see if deque is empty first, if so, insert val into middle of array
	{
		this->front = ((this->capacity - 1) / 2);						//set the first value insterted to be at the left half
		this->rear = this->front;										//1st element is both the front and rear
		this->deque[this->front] = val;									//push value to the front
		this->length++;
	}
	else if (this->front == 0 && (this->rear != this->capacity - 1))	//see if the array can be wrapped around when first half of array is all used up
	{
		this->front = this->capacity - 1;								//set the front to point to the last element of the array
		this->deque[this->front] = val;									//insert value after "wrapping" the array from front to the rear, if possible
		this->length++;													//update length
	}
	else if(this->length == this->capacity)								//check to see it all elements have been taken in array in order to resize
	{
		this->reSize();													//call resize method to double the size
		this->deque[--this->front] = val;								//insert the new val after updating and copying elements into larger array
 		this->length++;													//update the length
	}
	else
	{
		this->deque[--this->front] = val;								//otherwise, insert val into front of the deque
		this->length++;													//update the length
	}
}
//function that pops the front value/node from the deque
int Deque::popFront()
{
	if (this->isEmpty())							//check to make sure the deque is not empty, if it is, return value of zero
	{
		return 0;
	}
	else if(this->front == this->capacity - 1)		//check if we need to "unwrap" the array if it front points to the last element of the array
	{
		int popped = this->deque[this->front];		//get value in order to pop
		this->front = 0;							//set the front to the first element of the array, "unwrap"
		return popped;								//return the value
	}
	else
	{
		int popped = this->deque[front++];			//get the val at the front and update the front to be next element(right to left) 
		return popped;								//return value
	}
}

void Deque::pushRear(int val)
{
	if (this->isEmpty())												 //check to see if deque is empty first, if so, insert val into middle of array
	{
		this->rear = this->capacity / 2;								//set the rear to begin with 1st element of second half of array
		this->front = this->rear;										//1st element is both rear and front
		this->deque[this->rear] = val;									//push 1st element to the rear
		this->length++;
	}
	else if (this->rear == (this->capacity - 1) && (this->front != 0))	//see if the array can be wrapped around when second half of array is all used up
	{
		this->rear = 0;													//set the front to point to the last element of the array
		this->deque[this->rear] = val;									//insert value after "wrapping" the array from front to the rear, if possible
		this->length++;													//update length
	}
	else if (this->length == this->capacity)							//check to see it all elements have been taken in array in order to resize
	{
		this->reSize();													//call resize method to double the size
		this->deque[++this->rear] = val;								//insert the new val after updating and copying elements into larger array
		this->length++;													//update the length
	}
	else
	{
		this->deque[++this->rear] = val;								//otherwise, insert val into rear of the deque
		this->length++;													//update the length
	}
}

//function to pop the rear element
int Deque::popRear()
{
	if(this->isEmpty())								//check if array is empty, if so, return 0
	{
		return 0;
	}
	else if (this->rear == 0)						//check to see if array needs to be "unwrapped"
	{
		int popped = this->deque[this->rear];		//get value from rear(ist element of array) in order to pop
		this->rear = this->length - 1;				//"unwrap the rear from the front of the array"
		return popped;								//return popped value
	}
	else
	{
		int popped = this->deque[this->rear--];		//get value to be popped and decrement the rear
		return popped;								//return popped calue
	}
}

//Check to see if deque is empty
bool Deque::isEmpty()
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

//function to resize the deque once its length reaches capacity
void Deque::reSize()
{
	this->capacity = this->capacity * 2;								//double the current capacity								
	int* biggerDeque = new int[this->capacity];							//new (double sized)array that will obtain values from this->deque
									
	int new_front = (this->capacity / 2) - (this->length / 2);			//set the front to begin between the middle and front of new deque
	int new_rear = (this->capacity / 2) - ((this->length / 2) - 1);		//set the rear to begin between the middle and end of the new deque

	for (int i = 0; i < this->length / 2; i++)							//for loop to copy values into new array, only have 1/2 of length 
	{																	//iterations due to copying two values at a time
		if (this->front == this->length - 1)							//if statement to check if we have to "unwrap the array from the end"
		{
			this->front = 0;											//set the front to the first element in order to "unwrap" from the last element
			this->rear--;
		}
		else if (this->rear == 0)										//check to see if we habe to "unwrap" the array from the beginning
		{
			this->rear = (this->length - 1);							//set the rear to the last element to "unwrap" from the 1st element 
			this->front++;
		}

		biggerDeque[new_front++] = this->deque[this->front];			//copy values from the smaller array into the larger array with respect to the front/rear.
		biggerDeque[new_rear--] = this->deque[this->rear];
	}

	delete[] this->deque;												//delete smaller array and set to nullptr
	this->deque = biggerDeque;											//have the current object's deque become the newly sized one
	biggerDeque = nullptr;
	this->front = (this->capacity / 2) - (this->length / 2);			//set the front to point to the element midway between 1st and middle elements
	this->rear = (this->capacity / 2) - ((this->length / 2) - 1);		//set the reat to point to the element midway between middle and last element
}

//return length of deque
int Deque::getLength()
{
	return this->length;
}