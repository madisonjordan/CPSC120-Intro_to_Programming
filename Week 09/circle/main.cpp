//main.cpp

//Madison Jordan
//CPSC 120-15
//Lab 07
//Desc: circle class which also stores color and prints out circumference and area

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
	//create circle of class circle
	Circle my_circle;

	//radius of 4
	my_circle.setRadius(4);
	my_circle.my_color = BLUE;
	my_circle.printOut();
	
	//radius of 3.2
	my_circle.setRadius(3.2);
	my_circle.my_color = BLACK;
	my_circle.printOut();
	
	//diameter of 17.6
	my_circle.setDiameter(17.6);
	my_circle.my_color = RED;
	my_circle.printOut();
	
	//radius of 0.3
	my_circle.setRadius(0.3);
	my_circle.my_color = WHITE;
	my_circle.printOut();

	return 0;
}
