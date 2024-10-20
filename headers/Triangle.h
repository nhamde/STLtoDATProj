#pragma once
#include "Point.h"
#include <vector>
using namespace std;
class Triangle
{
	vector<Point>vertices;

public:
	Triangle(Point& p1, Point& p2, Point& p3);
	~Triangle();

	vector<Point> getVertices();
};

