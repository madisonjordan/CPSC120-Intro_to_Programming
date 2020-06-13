//Madison Jordan
//CPSC 120-15
//Lab 04
//Desc: Finds the sum of all multiples of 3 or 5 below 1000 using looping

#include <iostream>
using namespace std;

int main()
{
	//create variables
	int max_value;
	int answer=0;
	
	
	//user prompt
	cout<<"Multiples of 3 and 5\n"
	"====================\n"
	"Enter in a max value, and we'll sum up all multiples of 3 and 5.\n";
	
	cin>>max_value;
	

	//calculate sum of multiples of 3 and 5 under max value
	int i=0;

	do
	{
	
		if(i%3 == 0 || i%5 == 0)
		{
			answer += i;
		}
			i++;
	}while(i<max_value);

		
		//output answer
		cout<<"Answer: "<< answer <<endl;	
	
	return 0;
}
