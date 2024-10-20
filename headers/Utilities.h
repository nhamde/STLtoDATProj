#pragma once
#include <cmath>
#include <vector>
#include <iomanip>

bool areEqual(double d1, double d2)
{
	return (std::abs(d1 - d2) < 0.00001);
}

int * doublePtToIntPt(std::vector<double>& doubleNums, std::vector<double>& uniqueValues)
{
	int* indices = new int[3];
	
	for (int i = 0; i < doubleNums.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < uniqueValues.size(); j++)
		{
			if (areEqual(doubleNums[i], uniqueValues[j]))
			{
				indices[i] = j;
				found = true;
				break;
			}
		}
		if (!found)
		{
			uniqueValues.push_back(doubleNums[i]);
			indices[i] = uniqueValues.size() - 1;
			found = false;
			break;
		}
	}
	return indices;
}