#ifndef STRING_H
#define STRING_H

#include <iostream>

class String
{
public:
	String();
	String(std::string str);
	std::string getString();
	std::string operator() (const int beg, const int len);

private:
	std::string str;
};

#endif // !STRING_H

