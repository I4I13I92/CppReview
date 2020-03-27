#include "GradeMap.h"

GradeMap::GradeMap()
{
}
char& GradeMap::operator[](const std::string& name)
{
	auto beg = m_map.begin();
	auto end = m_map.end();

	auto found = std::find_if(beg, end, [&](const auto& student){
		return(student.name == name);
		});

	if (found != end)
	{
		return found->grade;
	}

	m_map.push_back({ name });

	return m_map.back().grade;
}