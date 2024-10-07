#pragma once
#include <iostream>
#include "Data.h"
#include <fstream>
#include <iomanip>

class ShapeWriter {
public:
	void write(const Data& D, const string& fpath);
	ShapeWriter();
	~ShapeWriter();
};