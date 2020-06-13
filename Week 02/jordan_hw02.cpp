//Madison Jordan
//CPSC 120-15
//Homework 02
//Bonus: Yes
//Desc: finds the third length of a triangle when given two sides

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//create variables for sides
	double a,b,c;
	
	//user prompt
	cout<< "Enter in a: ";
	cin>> a;
	
	cout<< "Enter in b: ";
	cin>> b;
	
	//calculate side c
	c = sqrt(pow(a,2) + pow(b,2));
	
	//output answer
	cout<< "c is: " << c << endl;
	
	return 0;	
}
