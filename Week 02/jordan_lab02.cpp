//Madison Jordan
//CPSC 120-15
//Lab 02
//Desc: finds the square root of a number input by a user

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//create varible for number and answer
	double my_number,ans;

	//user prompt
	cout<< "Please enter in a number: ";
	
	cin>> my_number;	
	
	//calculate square root
	ans = sqrt(my_number);
	
	//output answer
	cout<< "The square root of "<< my_number << " is " << ans << endl;
	
	return 0;
}
