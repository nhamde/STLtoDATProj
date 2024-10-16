#include "Reader.h"
using namespace std;

Reader::Reader() {}

vector<string> Reader::readData(string filename, Data* D) {
	ifstream file(filename);
	if (!file) {
		cerr << "Could not open the file." << endl;
		return vector<string>();
	}
	vector<string> rawData;
	string vertex = "vertex";
	string line;
	unsigned int numPts = 0, newId = 0;
	while (getline(file, line)) {
		int found = line.find(vertex);
		if (found != string::npos) {
			rawData.push_back(line);
		}
	}
	return rawData;

}

Reader::~Reader() {}