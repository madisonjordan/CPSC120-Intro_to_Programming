//Cuboid.cpp

// Madison Jordan
// CS120-15
// Desc: implementation file for cuboid program

#include "Cuboid.h"

Cuboid::Cuboid()
{
	width=1;    //default values
	height=1;
	depth=1;
}

//function when given one side. sides all equal. cube
Cuboid::Cuboid(double in_side)
{
    width=in_side;
    height=in_side;
    depth=in_side;
}

Cuboid::Cuboid(double in_width, double in_height, double in_depth)
{
    width=in_width;
    height=in_height;
    depth=in_depth;
}

void Cuboid::setWidth(double in_width)
{
    width=in_width;
}

void Cuboid::setHeight(double in_height)
{
    height=in_height;
}

void Cuboid::setDepth(double in_depth)
{
    depth=in_depth;
}

//check if the cuboid is a cube
bool Cuboid::isCube()
{
    if (width == height && height == depth)
    {
        //all sides are equal; it is a cube
        return true;
    }
    else
    {
        //not a cube
        return false;
    }
}

//find volume of a cuboid or cube
double Cuboid::calcVolume()
{
    return width*height*depth;
}



