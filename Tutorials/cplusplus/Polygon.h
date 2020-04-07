#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
	Polygon();
	void set_height(int h);
	void set_width(int w);

protected:
	int width;
	int height;
};
#endif // !POLYGON_H
