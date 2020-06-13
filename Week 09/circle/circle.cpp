//Circle.cpp

//Madison Jordan
//CPSC 120-15
//Lab 07

#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle()
{
	radius=1;	//default
}

Circle::Circle(double in_radius)
{
	radius = in_radius;
}

//for setting a radius
void Circle::setRadius(double in_radius)
{
	radius = in_radius;
}

//for setting a diameter
void Circle::setDiameter(double in_diameter)
{
	radius = in_diameter / 2.0;
}

//find radius
double Circle::getRadius()
{
	return radius;
}

//find diameter
double Circle::getDiameter()
{
	return radius*2;
}

//for calculating cicumference of a circle
double Circle::calcCircumference()
{
	return PI*(2*radius);
}

//for calculating area of a circle
double Circle::calcArea()
{
	return PI*(radius*radius);
}

//print function
void Circle::printOut()
{
	//print circumference, area, and color
	cout<< "Circumference: "<< calcCircumference() <<endl;
	cout<< "Area: "<< calcArea() <<endl;
	cout<< "Color: "<< RGB[my_color] <<endl<<endl;
}
