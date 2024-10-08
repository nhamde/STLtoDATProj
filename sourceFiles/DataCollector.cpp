#include "DataCollector.h"
using namespace std;

void DataCollector::processData(const vector<string>& rawData, Data* D) {
	Point* Pt = nullptr;
	Triangle* Tr = nullptr;
	string vertex = "vertex";
	unsigned int numPt = 1;
	stringstream ss;
	double num1, num2, num3;

	for (const string& line : D->rawData) {
		ss.clear();
		ss.str(line);
		ss >> ws >> vertex >> num1 >> num2 >> num3;

		Pt = new Point();

		if (D->map.find(num1) != D->map.end()) {
			Pt->setX(D->map[num1]);
		}
		else {
			D->map[num1] = D->ddVec.size();
			D->ddVec.push_back(num1);
			Pt->setX(D->ddVec.size() - 1);
		}

		if (D->map.find(num2) != D->map.end()) {
			Pt->setY(D->map[num2]);
		}
		else {
			D->map[num2] = D->ddVec.size();
			D->ddVec.push_back(num2);
			Pt->setY(D->ddVec.size() - 1);
		}

		if (D->map.find(num3) != D->map.end()) {
			Pt->setZ(D->map[num3]);
		}
		else {
			D->map[num3] = D->ddVec.size();
			D->ddVec.push_back(num3);
			Pt->setZ(D->ddVec.size() - 1);
		}

		if (numPt == 1) {
			Tr = new Triangle();
			Tr->setp1(*Pt);
			delete Pt;
			numPt++;
		}
		else if (numPt == 2) {
			Tr->setp2(*Pt);
			delete Pt;
			numPt++;
		}
		else if (numPt == 3) {
			Tr->setp3(*Pt);
			D->trs.push_back(Tr);
			delete Pt;
			numPt = 1;
		}
	}
}

DataCollector::DataCollector() {}
DataCollector::~DataCollector() {}

