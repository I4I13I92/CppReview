#pragma once
class Deque
{
private:
	int length;
	int capacity;
	int* deque;
	int front;
	int rear;
public:
	Deque();
	~Deque();
	void pushFront(int val);
	int popFront();
	void pushRear(int val);
	int popRear();
	bool isEmpty();
	void reSize();
	int getLength();
};

