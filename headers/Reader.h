#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Data.h"

class Reader {
public:
	void readData(string fname, Data* D);
	Reader();
	~Reader();
};
