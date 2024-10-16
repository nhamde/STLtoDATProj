#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Data.h"

class Reader {
public:
	Reader();
	vector<string> readData(string fname, Data* D);
	~Reader();
};
