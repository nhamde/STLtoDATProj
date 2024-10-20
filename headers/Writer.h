#pragma once
#include <string>

template <typename dataStructure>
class Writer
{
public:
	virtual void write(const std::string& filename, const dataStructure& dsName) = 0;
};