#include "String.h"

String::String()
{
	str = " ";
}

String::String(std::string s)
	:str{s}
{
}
std::string String::getString()
{
	return str;
}

std::string String::operator() (const int beg, const int len)
{
	
	int sub_length = str.length() - beg;

	if (beg > str.length())
	{
		return "Nope";
	}
	else if (len > sub_length)
	{
		return "Never";
	}
	else
	{
		std::string substring{""};

		for(int i = len, j = beg; i > 0; --i, j++)
		{
			substring += str[j];
		}

		return substring;
	}
}