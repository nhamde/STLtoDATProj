#include "STLReader.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include "Utilities.h"
using namespace std;

#define X 0;
#define Y 1;
#define Z 2;

void STLReader::read(const string& filename, Triangulation& triangulation)
{
	ifstream file(filename);
	if (!file) {
		cerr << "Could not open the file." << endl;
		return;
	}
	vector<Triangle> triangles;
	vector<double> uniqueValues = { 0 };
	string vertex = "vertex";
	string line;
	stringstream ss;
	
	Point p1(0, 0, 0);
	Point p2(0, 0, 0);
	Point p3(0, 0, 0);

	bool formed3Pts = false;
	size_t numTriangles = 1;
	vector<double> doubleNums;
	int* integerArray = new int[3];
	int numPts = 0;

	while (getline(file, line)) {
		int found = line.find(vertex);
		if (found != string::npos) {
			double num1 = 0;
			double num2 = 0;
			double num3 = 0;
			stringstream ss(line);
			ss >> vertex >> num1 >> num2 >> num3;
			doubleNums = { num1, num2, num3 };
			integerArray = doublePtToIntPt(doubleNums, uniqueValues);

			if (numPts % 3 == 0) {
				p1.setX(integerArray[0]);
				p1.setY(integerArray[1]);
				p1.setZ(integerArray[2]);
			}
			else if (numPts % 3 == 1) {
				p2.setX(integerArray[0]);
				p2.setY(integerArray[1]);
				p2.setZ(integerArray[2]);
			}
			else if (numPts % 3 == 2) {
				p3.setX(integerArray[0]);
				p3.setY(integerArray[1]);
				p3.setZ(integerArray[2]);
				triangles.push_back(Triangle(p1, p2, p3));
			}
			numPts++;
		}
	}
	triangulation.setTriangles(triangles);
	triangulation.setUniqueData(uniqueValues);
	delete[] integerArray;
}