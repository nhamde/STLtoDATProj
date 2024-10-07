#include "Reader.h"
using namespace std;

void Reader::readData(string filename, Data* D) {
	ifstream file(filename);
	if (!file) {
		cerr << "Could not open the file." << endl;
		return;
	}
	string vertex = "vertex";
	string line;
	unsigned int numPts = 0, newId = 0;
	while (getline(file, line)) {
		int found = line.find(vertex);
		if (found != string::npos) {
			D->rawData.push_back(line);
		}
	}


}

Reader::Reader() {}
Reader::~Reader() {}