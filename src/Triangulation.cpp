#include "Triangulation.h"
#include <iostream>

void Triangulation::setTriangles(const vector<Triangle>& _trs)
{
	triangles = _trs;
}
void Triangulation::setUniqueData(const vector<double>& _uniqueValues)
{
	uniqueData = _uniqueValues;
}
vector<Triangle> Triangulation::getTriangles() const
{
	return triangles;
}
vector<double> Triangulation::getUniqueData() const
{
	return uniqueData;
}
void Triangulation::displayTrs()
{
	for (auto t : triangles)
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << t.getVertices()[i].getX() << " " << t.getVertices()[i].getY() << " " << t.getVertices()[i].getZ() << std::endl;
		}
	}
}