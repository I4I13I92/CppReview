#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int length;

public:
	LinkedList();
	~LinkedList();
	void insert(int value);
	void remove(int value);
	int find(int value);
	int getLength();
	void printList();
	bool isEmpty();
	int getHead();
	int getTail();
};

#endif // !LINKEDLIST_H
