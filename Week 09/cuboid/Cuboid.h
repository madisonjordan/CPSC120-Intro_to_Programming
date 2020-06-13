#ifndef _CUBOID_H_
#define _CUBOID_H_

class Cuboid
{
private:
	double width;
	double height;
	double depth;
public:
	Cuboid();
	Cuboid(double);
	Cuboid(double, double, double);
	void setWidth(double);
	void setHeight(double);
	void setDepth(double);
	bool isCube();
	double calcVolume();
};

#endif // End Cuboid.h
