#include <iostream>

#include "LinkedList.h"

//default constructor
LinkedList::LinkedList()					
{
	this->length = 0;						//set the length of the list to 0 upon initialization
}

//Destructor to delete dynamic data/pointers.
//Will iterate through linked list to delete each node individually
LinkedList::~LinkedList()					
{
	
	if (this->isEmpty())					//check to see if list is empty first
	{
		return;
	}
	else
	{
		Node* temp;							//node that will point to data that will be deleted 

		
		while (this->head->next != nullptr) //iterate through linked list til tail is hit
		{
			
			temp = this->head;				//store the current head that will be in deleted in temp 
			this->head = this->head->next;  //update the head be the next following node in the list 
			delete temp;					//delete the node 
		}

		delete this->head;					//delete the data pointed to by head, no need to delete tail since both H/T point to the same location
	}
}

void LinkedList::insert(int value)			//insert a value(Node), into the front of the linked list
{
	Node* currNode = new Node;				//dynamically allocote node to that will be inserted
	currNode->value = value;				//set node's value

	if (this->isEmpty())					//check to see if list is empty, if it is, have Node be the head and tail
	{
		this->head = currNode;				//set both the first node to be the Head and the Tail
		this->tail = currNode;
		this->length++;						//increment the length by 1
	}
	else                                    //if node is not empty, update the head of list to the newly inserted node
	{
		currNode->next = this->head;		//have the new node point to the current HEAD 
		this->head = currNode;				//set the new node to be the HEAD 
	}
}

void LinkedList::remove(int value)
{
	int x = value + 4;
	std::cout << x;
}

int LinkedList::find(int value)
{
	return value;
}

//Returns the current length of the List.
int LinkedList::getLength()
{
	return this->length;			//return the length
}

//Prints each value of all nodes in the List
//INCOMPLETE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void LinkedList::printList()
{
	if (this->isEmpty())							//check to see if List is empty or not
	{
		std::cout << "Linked List is empty.\n";		
	}
	else
	{
	}

}

//Checks if the List is empty
bool LinkedList::isEmpty()
{
	if (this->length == 0)			//uses the length of the array to determine boolean value to return
	{
		return true;				//returns true if it's empty
	}
	else
	{
		return false;				//otherwise it returns true
	}
}

//returns value of the head
int LinkedList::getHead()
{
	return this->head->value;		//return value of Head node
}

//returns value of the tail
int LinkedList::getTail()
{
	return this->head->value;		//return value of tail node
}
