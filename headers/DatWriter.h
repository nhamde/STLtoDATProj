#pragma once
#include "Triangulation.h"
#include "Writer.h"

class DatWriter: private Writer<Triangulation>
{
public:
	void write(const string& filename, const Triangulation& tri);
};

