//Circle.h

//Madison Jordan
//CPSC 120-15
//Lab 07


//create global variables for pi and for colors
const double PI=3.1415927;
const std::string RGB[]={"RED","GREEN","BLUE","BLACK","WHITE"};

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
