#include "shapewriter.h"

void ShapeWriter::write(const Data& D, const string& fpath) {
	ofstream out(fpath);
	for (auto tr : D.trs)
		out << fixed << setprecision(6)
		<< D.ddVec[tr->p1.getX()] << " " << D.ddVec[tr->p1.getY()] << " " << D.ddVec[tr->p1.getZ()] << endl
		<< D.ddVec[tr->p2.getX()] << " " << D.ddVec[tr->p2.getY()] << " " << D.ddVec[tr->p2.getZ()] << endl
		<< D.ddVec[tr->p3.getX()] << " " << D.ddVec[tr->p3.getY()] << " " << D.ddVec[tr->p3.getZ()] << endl 
		<< D.ddVec[tr->p1.getX()] << " " << D.ddVec[tr->p1.getY()] << " " << D.ddVec[tr->p1.getZ()] << endl << "\n\n";
}

ShapeWriter::ShapeWriter(){}
ShapeWriter::~ShapeWriter(){}