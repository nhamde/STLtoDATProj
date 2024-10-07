#include "triangle.h"
using namespace std;

void Triangle::setp1(Point p) {
	p1 = p;
}
void Triangle::setp2(Point p) {
	p2 = p;
}
void Triangle::setp3(Point p) {
	p3 = p;
}

void Triangle::displayPts() {
	cout << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
	cout << p2.getX() << " " << p2.getY() << " " << p2.getZ() << endl;
	cout << p3.getX() << " " << p3.getY() << " " << p3.getZ() << endl;
}
Triangle::Triangle() {}
Triangle::Triangle(Point a, Point b, Point c) :p1(a), p2(b), p3(c) {}
Triangle::~Triangle() {}