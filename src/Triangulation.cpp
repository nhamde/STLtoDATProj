#include "Triangulation.h"
using namespace std;

Triangulation::Triangulation() {}

void Triangulation::processData(const vector<string>& rawData, Data* D, unordered_map<double, size_t>& map) {
	string vertex = "vertex";
	unsigned int numPt = 1;
	stringstream ss;
	double num1, num2, num3;

	for (const string& line : rawData) {
		ss.clear();
		ss.str(line);
		ss >> ws >> vertex >> num1 >> num2 >> num3;

		Point* Pt1 = new Point();
		Point* Pt2 = new Point();
		Point* Pt3 = new Point();

		if (map.find(num1) != map.end()) {
			Pt1->setX(map[num1]);
		}
		else {
			map[num1] = D->ddVec.size();
			D->ddVec.push_back(num1);
			Pt1->setX(D->ddVec.size() - 1);
		}

		if (map.find(num2) != map.end()) {
			Pt2->setY(map[num2]);
		}
		else {
			map[num2] = D->ddVec.size();
			D->ddVec.push_back(num2);
			Pt2->setY(D->ddVec.size() - 1);
		}

		if (map.find(num3) != map.end()) {
			Pt3->setZ(map[num3]);
		}
		else {
			map[num3] = D->ddVec.size();
			D->ddVec.push_back(num3);
			Pt3->setZ(D->ddVec.size() - 1);
		}

		Triangle Tr(*Pt1, *Pt2, *Pt3);
		D->trs.push_back(Tr);

		delete Pt1;
		delete Pt2;
		delete Pt3;

		/*if (numPt == 1) {
			Triangle Tr;
			Tr.setp1(*Pt);
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
		}*/
	}
}

Triangulation::~Triangulation() {}