#include "Vector3D.h"

//default constructor
Vector3D::Vector3D()
	:x(1.0),
	y(1.0),
	z(1.0),
	name(new std::string(" "))
{
	vector_count++;
}

//constructor
Vector3D::Vector3D(double a, double b, double c, std::string& str)
	:x(a),
	y(b),
	z(c),
	name(new std::string(str))
{
	vector_count++;
}

//destructor
Vector3D::~Vector3D()
{
	vector_count--;
	delete name;
}

//copy constructor
Vector3D::Vector3D(const Vector3D& vector)
{
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;
	this->name = new std::string(vector.get_name());
}

//vector addition
Vector3D Vector3D::operator+(const Vector3D& vec)
{
	Vector3D temp;

	temp.x = x + vec.x;
	temp.y = y + vec.y;
	temp.z = z + vec.z;

	return temp;
}
/*//move constructor
Vector3D::Vector3D(Vector3D&& vector)
	:x(),
	y(),
	z(),
	name(vector.name)
{
	vector.name = nullptr;
}

//move assingment
Vector3D& Vector3D::operator=(Vector3D&& vector)
{
	delete name;
	name = vector.name;

	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;

	vector.name = nullptr;

	return *this;
}*/


//assingment overload
Vector3D& Vector3D::operator=(const Vector3D& vector)
{
	delete name;
	*name = vector.get_name();
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;

	return *this;
}

//get string(name)
const std::string& Vector3D::get_name() const
{
	return *name;
}