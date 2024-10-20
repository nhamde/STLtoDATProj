#pragma once
#include "Reader.h"
#include "Triangulation.h"

class STLReader : private Reader<Triangulation>
{
public:
	void read(const string& filename, Triangulation& triangulation);
};

