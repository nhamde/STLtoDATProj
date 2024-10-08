#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "Data.h"
#include "Point.h"
#include "Triangle.h"

class DataCollector {
public:
	void processData(const vector<string>&, Data* D);
	DataCollector();
	~DataCollector();
};
