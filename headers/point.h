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
	Point();
	Point(int, int, int);
	~Point();
};