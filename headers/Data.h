#pragma once
#include <vector>
#include <string>
#include "Triangle.h"
#include <unordered_map>
using namespace std;

class Data {
public:
	vector<double> ddVec;
	vector<Triangle>trs;
public:
	Data();
	~Data();
};
