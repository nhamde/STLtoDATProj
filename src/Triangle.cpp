#include "Triangle.h"

Triangle::Triangle(Point& _p1, Point& _p2, Point& _p3)
{
	vertices = { _p1, _p2, _p3 };
}
Triangle::~Triangle() {}

vector<Point> Triangle::getVertices()
{
	return vertices;
}