#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "data.h"
#include "point.h"
#include "triangle.h"

class Collector {
public:
	void processData(const vector<string>&, Data* D);
	Collector();
	~Collector();
};
