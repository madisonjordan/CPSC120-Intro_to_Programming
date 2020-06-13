//Madison Jordan
//CPSC 120-15
//Homework 03
//Bonus: No
//Desc: determines a letter grade when given a score
	
	
#include <iostream>
using namespace std;

int main()
{
	//create variable for score
	double score;
	
	//user prompt for score
	cout<<"Enter in a grade score: ";
	cin>>score;
	
	//determine letter grade
	if (score<200 && score>=90)
	{
		cout<<"Congrats, you earned an A!"<< endl;
	}
	else if(score<90 && score>=80)
	{
		cout<<"Congrats, you earned a B!"<< endl;
	}
	else if(score<80 && score>=70)
	{
		cout<<"You earned a C. At least you passed." << endl;
	}
	else if(score<70 && score>=60)
	{
		cout<<"You earned a D. It could be worse." << endl;
	}
	else if(score<60 && score>=0)
	{
		cout<<"Sorry, you earned an F." << endl;
	}
	else
	{
		cout<<"I cannot recognize this as a score." <<endl;
	}
	
	return 0;
}
