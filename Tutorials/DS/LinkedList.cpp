#include <iostream>

#include "LinkedList.h"

//default constructor
LinkedList::LinkedList()					
{
	this->head = nullptr;					//set head to nullptr
	this->tail = nullptr;					//set tail to nullptr
	this->length = 0;						//set the length of the list to 0 upon initialization
}

//Destructor to delete dynamic nodes.
//Will iterate through linked list to delete each node individually
LinkedList::~LinkedList()					
{
	
	if (this->isEmpty())					//check to see if list is empty first
	{
		return;
	}
	else
	{
		Node* temp;							//node that will point to data to be deleted 

		
		while (this->head->next != nullptr) //iterate through linked list til the tail is hit
		{
			
			temp = this->head;				//store the current head that will be deleted through temp 
			this->head = this->head->next;  //update the head be the next following node in the list 
			delete temp;					//delete the node 
		}

		delete this->head;					//delete the data pointed to by head, no need to delete tail since both H/T point to the same location at this point
	}
}

//NEED TO INCLUDE ELSE/IF FOR HEAD
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

//NEED TO INCLUDE ELSE/IF FOR HEAD
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void LinkedList::remove(int value)
{
	if (this->isEmpty())
	{
		std::cout << "List is empty, there is nothing to remove.\n";
	}
	else
	{
		Node* prev_node = this->head;						//node pointer to hold previous node in list 
		Node* curr_node = this->head->next;					//node to be deleted, starting with the second node in list			

		while (curr_node->next != nullptr)					//while loop to begin iteration starting at the second node
		{
			if (curr_node->value == value)					//check to see if the values match
			{
				prev_node->next = curr_node->next;			//have the previous node point to the current node's proceding node to not lose the link
				delete curr_node;							//delete and remove the current node from the list
				return;										//return from function no need to continue, FOR NOW, NEED TO CONSIDER SITUATION WHERE VALUE IS... 
															//STORED MULTIPLE TIMES IN THE LIST!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			}
		}
	}
}

//check to see if list contains node with a specific value
bool LinkedList::find(int value)
{
	Node* curr_node;						//node to iterate through
	curr_node = this->head;		 			//set node to the haed

	while (curr_node->next != nullptr)	//while loop to begin iteration through list
	{
		if (curr_node->value == value)	//return true if value is contained within the List
		{
			return true;
		}
	}

	return false;					//return false if value is not found in List
}

//Returns the current length of the List.
int LinkedList::getLength()
{
	return this->length;			//return the length
}

//Prints each value of all nodes in the List
void LinkedList::printList()
{
	if (this->isEmpty())							//check to see if List is empty or not
	{
		std::cout << "Linked List is empty.\n";
	}
	else
	{
		Node* curr_node;
		curr_node = this->head;						//set the head to current node to begin iteration

		while (curr_node->next != nullptr)			//start looping through the list as long as the next node is not nullpointer  
		{
			std::cout << curr_node->value << " \n";//display the value of the current node
			curr_node = curr_node->next;		   //set the current node to be to next node 
		}

		std::cout << this->getTail() << '\n';	  //Since the last node's value won't be printed, print the tail's value to console through getTail method
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
