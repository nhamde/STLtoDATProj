#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "Data.h"
#include "Point.h"
#include "Triangle.h"

class Triangulation {
public:
	void processData(const vector<string>&, Data* D, unordered_map<double, size_t>& map);
	Triangulation();
	~Triangulation();
};
