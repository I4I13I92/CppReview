#include "myPair.h"

template<typename T>
myPair<T>::myPair()
	:one(1.0),
	two(2.0)
{
}

template<typename T>
myPair<T>::myPair(T a, T b)
	:one(a),
	two(b)
{
}

template<typename T>
T myPair<T>::getMax()
{
	T ret_val;
	ret_val = one > two ? one : two;
	return ret_val;
}
