#pragma once

#include "Node.h"
class Queue
{
private:
	int front;
	int back;
	int* nodes;
	int length;
	int capacity;
public:
	Queue();
	~Queue();
	int pop();
	void insert(int value);
	bool isEmpty();
	void resize();
	bool reachedCapacity();
};

