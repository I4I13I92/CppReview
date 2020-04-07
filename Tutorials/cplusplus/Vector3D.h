#pragma once
#include <string>

class Vector3D
{
	double x;
	double y;
	double z;
	std::string* name;
	static int vector_count;

public:
	Vector3D();//default constructor
	Vector3D(double a, double b, double z, std::string& str);//initial constructor
	~Vector3D();//destructor
	Vector3D(const Vector3D& vector);//Copy constructor
	//Vector3D(Vector3D&& vector);//move constructor
	//Vector3D& operator=(Vector3D&& vector);//move assingment
	Vector3D& operator=(const Vector3D& vector);//Copy assignment
	Vector3D operator+(const Vector3D& vec);//vector addtion
	const std::string& get_name() const;//return vector name
	//static int vectors;
};

int Vector3D::vector_count = 0;