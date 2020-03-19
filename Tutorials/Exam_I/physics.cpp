#include <iostream>
#include "constants.h"

//function used to determine the height of the ball at a certain point in time
double ballHeight(double height, int seconds)
{
	double distance_fallen{ 0 };

	distance_fallen = gravity * (seconds * seconds) / 2;

	height -= distance_fallen;
	return height;
}

//display the height of the ball or if it has hit the ground
void displayHeight(double height, int seconds)
{
	if (height > 0.0)
	{
		std::cout << "At "<< seconds << " second(s), the ball is at height: " << height << " meters.\n";
	}
	else
	{
		std::cout << "At "<< seconds <<" seconds, the ball is on the ground.";
	}
}

//get the height in meters from the user 
double Height()
{
	double heightInMeters{};
	std::cout << "Enter the height of the building where the ball will be dropped from: ";
	std::cin >> heightInMeters;

	return heightInMeters;
}