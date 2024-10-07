#pragma once
#include <vector>
#include <string>
#include "triangle.h"
#include <unordered_map>
using namespace std;

class Data {
public:
	vector<double> ddVec;
	unordered_map<double, size_t> map;
	vector<Triangle*>trs;
	vector<string> rawData;
public:
	void saveData();
	Data();
	~Data();
};
