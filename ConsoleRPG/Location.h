#ifndef LOCATION_H
#define LOCATION_H

/*****************************************
*	Structure used to store coordinates
*		used to represent a location
*****************************************/
struct Coordinate
{
	int posX;
	int posY;
	int posZ;
};

struct Location
{
	Coordinate worldLocation;
	Coordinate zoneLocation;
	Coordinate localLocation;
};
#endif