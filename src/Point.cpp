#include "Point.h"

Point::Point(int _x = 0, int _y = 0, int _z = 0) : x(_x), y(_y), z(_z) {}
Point::~Point() {}

void Point::setX(int _x)
{
	x = _x;
}

void Point::setY(int _y)
{
	y = _y;
}

void Point::setZ(int _z)
{
	z = _z;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

int Point::getZ()
{
	return z;
}
