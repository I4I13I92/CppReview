#include "Rectangle.h"

Rectangle::Rectangle()
	:width(5),
	height(6)
{
}

Rectangle::Rectangle(int w, int h)
	:width(w),
	height(h)
{
}

int Rectangle::get_area()
{
	return width * height;
}


