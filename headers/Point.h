#pragma once
#include <iostream>
class Point {
private:
	int x, y, z;
public:
	void setX(int);
	void setY(int);
	void setZ(int);

	int getX();
	int getY();
	int getZ();

	void displayPt();

	Point(int xi = 0, int yi = 0, int zi = 0);

	Point();
	Point(int, int, int);

	~Point();
};
