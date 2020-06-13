//Madison Jordan
//CPSC 120-15
//Homework 08
//Bonus: Yes
//Desc: circle class which also stores color and prints out circumference and area

#include <iostream>
using namespace std;

//create global variables for pi and for colors
const double PI=3.1415927;
const string RGB[]={"RED","GREEN","BLUE","BLACK","WHITE"};

//enumerate colors for circle
enum Color
{
	RED,
	GREEN,
	BLUE,
	BLACK,
	WHITE,
};

class Circle
{
	private:
		double radius;
	
	public:
		Circle();
		Circle(double);
		Color my_color;			//color variable
		void setRadius(double);
		void setDiameter(double);
		double getRadius();
		double getDiameter();
		double calcCircumference();
		double calcArea();
		void printOut();
};


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
