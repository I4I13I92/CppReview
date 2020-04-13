#include <iostream>
#include "Queue.h"

Queue::Queue()
{
	this->front = 0;			//set the front/back to the first element
	this->back = 0;
	this->nodes = new int[8];	//set the intitial capacity of the queue to 8 
	this->length = 0;			//variable to keep track of elements used of queue
	this->capacity = 8;			//keep track of the capacity in case for resizing 
}

//Class Destructor to delete dynamic array 
Queue::~Queue()
{
	delete[] this->nodes;			//delete dynamically allocated array
	this->nodes = nullptr;			//set to NULL pointer
}

int Queue::pop()
{
	int popped = 0;									//where popped value will be stored

	if (this->isEmpty())						//check to see if queue is not empty first
	{
		std::cout << "The queue is empty.\n";
		return 0;								//return 0 if it is empty, NEED TO FIND ALTERNATIVE WAY TO HANDLE THIS CASE!
	}
	else
	{
		popped == this->nodes[front];			//pop the front of the queue into variable POPPED
		this->front++;							//update the front of the queue
		this->length--;							//decrease the current length of the queue 
	}

	return popped;
}

void Queue::insert(int value)
{
	if (this->reachedCapacity())									//check to see if length has reached the capacity
	{
		this->resize();												//resize the queue
	}
	else if(!(this->isEmpty()) && this->front == this->back)		//check to see if the front and back are at the same element and the queue is not empty
	{																//in order to shift them both back to the 1st element
		this->nodes[0] = this->nodes[back];							//if the is only one element left and not at [0], reshft its conetents there.
		this->back = 0;												//Reset the front and back back to the first element
		this->front = 0;
	}
	else if (this->back == this->capacity - 1 && this->front != 0)	//Check to see if we can wrap around the array for the back if there is space available 
	{
		this->back = 0;												//reset the back to point to the 1st element to wrap around
	}

	this->nodes[back] = value;										//insert the node to the back of the queue, with 1st insertion also being the front
	this->length++;													//increment length 
	this->back++;													//update the back to the following element
}

//Function to check if queue is empty
bool Queue::isEmpty()
{
	if (this->length == 0)		//returns true if it is empty
	{
		return true;
	}
	else
	{
		return false;			//else returns false if not
	}
}
void Queue::resize()
{
	int* resize_queue = new int[2 * this->capacity];						//create a new dynamic array who's capacity is twice as large as the this->nodes

	int shifted_start_index = this->front - this->capacity;					//store the difference to offset the front of the two arrays 
																			//when copying over during resizing

	for (int i = 0, j = this->front; i < shifted_start_index; i++, j++)		//use of i for the new resized array, 
	{																		//j to start wherever the front maybe from previous array
		resize_queue[i] = this->nodes[j];
	}

	shifted_start_index = this->front - this->capacity;						//this time its used as starting point to copy over the rest of the elements
																			//due to this->array being wrapped around

	for (int i = shifted_start_index, j = 0; j <= this->back; i++, j++)		//have i iterate through the newly sized array and pick up from the above iteration,
	{																		//while j will iterate through this->nodes starting from the first element, til it 
																			//reaches where the for loop above started
		resize_queue[shifted_start_index] = this->nodes[j];					//copy over the remaining elements
	}

	delete[] this->nodes;													//deallocate the old data the this->nodes holds
	this->nodes = resize_queue;												//update so this->nodes now points to the larger array with the copied pointers
	resize_queue = nullptr;													//set resize_queue to NULL pointer
	this->capacity *= 2;													//double the capacity to keep track of the new array
}

//Function to check if the length of queue has reached its capacity
bool Queue::reachedCapacity()
{

	if (this->length > 0 && this->length == this->capacity)			//Check to see if the length matches the capacity of the dynamic array
	{																//and make sure length is greater than 0 or resizing will occur when length is 0.
		return true;
	}
	else
	{
		return false;
	}
}
