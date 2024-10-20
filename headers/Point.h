#pragma once
class Point
{
	int x;
	int y;
	int z;

public:
	Point(int, int, int);
	~Point();

	void setX(int);
	void setY(int);
	void setZ(int);
	
	int getX();
	int getY();
	int getZ();
};

