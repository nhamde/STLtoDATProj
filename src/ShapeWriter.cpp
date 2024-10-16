#include "Shapewriter.h"

void ShapeWriter::write(const Data& D, const string& fpath) {
	ofstream out(fpath);
	for (auto tr : D.trs)
		out << fixed << setprecision(6)
		<< D.ddVec[tr->getp1().getX()] << " " << D.ddVec[tr->getp1().getY()] << " " << D.ddVec[tr->getp1().getZ()] << endl
		<< D.ddVec[tr->getp2().getX()] << " " << D.ddVec[tr->getp2().getY()] << " " << D.ddVec[tr->getp2().getZ()] << endl
		<< D.ddVec[tr->getp3().getX()] << " " << D.ddVec[tr->getp3().getY()] << " " << D.ddVec[tr->getp3().getZ()] << endl
		<< D.ddVec[tr->getp1().getX()] << " " << D.ddVec[tr->getp1().getY()] << " " << D.ddVec[tr->getp1().getZ()] << endl << "\n\n";
}
ShapeWriter::ShapeWriter() {}
ShapeWriter::~ShapeWriter() {}