#pragma once
#include <iostream>
#include "point.h"
class Triangle {
public:
	Point p1, p2, p3;
	void setp1(Point);
	void setp2(Point);
	void setp3(Point);

	void displayPts();
	Triangle();
	Triangle(Point, Point, Point);
	~Triangle();
};