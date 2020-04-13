#pragma once
class Stack
{
private:
	int length;
	int capacity;
	int* stack;

public:
	Stack();
	~Stack();
	int pop();
	void insert(int n);
	int checkTop();
	bool isEmpty();
	void reSize();
	int getSize();
};

