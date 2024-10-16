#pragma once
#include <iostream>
#include "Point.h"
class Triangle {
private:
	Point p1, p2, p3;
public:
	void setp1(Point);
	void setp2(Point);
	void setp3(Point);

	Point getp1();
	Point getp2();
	Point getp3();

	Triangle();
	Triangle(Point, Point, Point);
	~Triangle();
};
