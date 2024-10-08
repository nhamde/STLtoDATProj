#include "Point.h"
using namespace std;

void Point::setX(int i) {
	x = i;
}
void Point::setY(int i) {
	y = i;
}
void Point::setZ(int i) {
	z = i;
}
int Point::getX() {
	return x;
}
int Point::getY() {
	return y;
}
int Point::getZ() {
	return z;
}
void Point::displayPt() {
	cout << Point::getX() << " " << Point::getY() << " " << Point::getZ() << endl;
}
Point::Point(int xi, int yi, int zi) : x(xi), y(yi), z(zi) {}
Point::~Point() {}