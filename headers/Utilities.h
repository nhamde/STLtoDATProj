#pragma once
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define TOLERANCE 0.00001
inline bool areEqual(double d1, double d2)
{
	return (std::fabs(d1 - d2) < 0.00001);
}

struct comparer {
	bool operator()(double a, double b) const {
		return fabs(a-b) > TOLERANCE ? a < b : false;
	}
};

inline int* doublePtToIntPt(std::vector<double>& doubleNums, std::vector<double>& uniqueValues, map<double, int, comparer>& uniqueMap, int index)
{
	int* indices = new int[3];

	for (int i = 0; i < doubleNums.size(); i++)
	{
		if (uniqueMap.find(doubleNums[i]) == uniqueMap.end())
		{
			uniqueMap[doubleNums[i]] = index;
			uniqueValues.push_back(doubleNums[i]);
			indices[i] = index;
			index++;
		}
		else
		{
			indices[i] = uniqueMap[doubleNums[i]];
		}
	}
	
	/*for (int i = 0; i < doubleNums.size(); i++)
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
	}*/
	return indices;
}