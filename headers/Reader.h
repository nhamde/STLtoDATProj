#pragma once
#include <string>

template <typename dataStructure>
class Reader
{
public:
	virtual void read(const std::string& filename, dataStructure& dsName) = 0;
};

