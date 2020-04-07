#pragma once
template <typename T>
class myPair
{
	T one;
	T two;

public:
	myPair();
	myPair(T a, T b);
	T getMax();
};

