#ifndef GRADEMAP_H
#define GRADEMAP_H

#include <vector>
#include <algorithm>
#include <iostream>

#include "StudentGrade.h"

class GradeMap
{
public:
	GradeMap();
	char& operator[](const std::string &name);

private:
	std::vector<StudentGrade> m_map;
};

#endif // !GRADEMAP_H

