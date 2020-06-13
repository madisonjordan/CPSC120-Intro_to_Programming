//Madison Jordan
//CPSC 120-15
//Homework 04
//Bonus: Yes
//Desc: Find the sum of even numbers in the fibonacci sequence

#include <iostream>
using namespace std;

int main()
{
	//initialize varibles
	unsigned long int a,b,c,total,max_value;
	
	//user prompt
	cout<<"Fibonacci Sequence\n"
	"==================\n"
	"This program will find the sum of all even numbers\n" 
	"in a fibonacci sequence when given a maximum value.\n\n"
	"Enter in a max value: ";
	cin>>max_value;
	
	//define initial values
	a=1;
	b=2;
	c=a+b;
	total=2;

	//find sum
	do
	{		
		//loop check of even values
		if(c%2 == 0)
		{
			total += c;
		}
		
		a=b;
		b=c;
		c=a+b;
		
	}while(c<=max_value);
	
	
	//output answer
	cout<<"The sum is "<< total <<endl;
	
	return 0;	
	}
	
	
	
