#include "constants.h"

double ballHeight(double height, int seconds)
{
	double distance_fallen{ 0 };

	distance_fallen = gravity * (seconds * seconds) / 2;

	height -= distance_fallen;
	return height;
}