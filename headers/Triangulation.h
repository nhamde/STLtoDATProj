#pragma once
#include "Triangle.h"
#include <vector>
#include "Utilities.h"
class Triangulation
{
	vector<Triangle> triangles;
	vector<double> uniqueData;

public:
	void setTriangles(const vector<Triangle>& _trs);
	void setUniqueData(const vector<double>& _uniqueValues);

	vector<Triangle> getTriangles() const;
	vector<double> getUniqueData() const;

	void displayTrs();
};

