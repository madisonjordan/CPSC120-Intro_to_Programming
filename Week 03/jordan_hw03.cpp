//Madison Jordan
//CPSC 120-15
//Homework 03
//Bonus: Yes
//Desc: determines a grade range when given a letter grade
	
	
#include <iostream>
using namespace std;

int main()
{
	//create variable for score
	char grade;
	
	//user prompt for score
	cout<<"Enter in a grade letter: ";
	cin>>grade;
	
	//determine grade range
	switch(grade)
	{
	case 'A':
	case 'a':
		cout<<"You received a grade between 90 and 100.\n";
		break;
	case 'B':
	case 'b':
		cout<<"You received a grade between 80 and 89.\n";
		break;
	case 'C':
	case 'c':
		cout<<"You received a grade between 70 and 79.\n";
		break;
	case 'D':
	case 'd':
		cout<<"You received a grade between 60 and 69.\n";
	case 'F':
	case 'f':
		cout<<"You received a grade lower than 59.\n";
	default:
		cout<<"This is not a letter grade.\n";
	}
	
	return 0;
}
