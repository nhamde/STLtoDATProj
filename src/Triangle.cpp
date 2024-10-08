#include "Triangle.h"
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
Point Triangle::getp1() {
	return p1;
}
Point Triangle::getp2() {
	return p2;
}
Point Triangle::getp3() {
	return p3;
}

Triangle::Triangle() {}
Triangle::Triangle(Point a, Point b, Point c) :p1(a), p2(b), p3(c) {}
Triangle::~Triangle() {}