//Madison Jordan
//CPSC 120-15
//Lab 04
//Desc: Finds the sum of all multiples of 3 or 5 using looping

#include <iostream>
using namespace std;

int main()
{
	//create variables
	int max_value;
	int answer=0;
	
	string usr_input;
	bool do_loop=true;
	
	//user prompt
	cout<<"Multiples of 3 and 5\n"
	"====================\n"
	"Enter in a max value, and we'll sum up all multiples of 3 and 5.\n";
	
	do
	{
		cout<<"Max value: ";
		cin>>usr_input;
		
		if(isdigit(usr_input[0]))
		{
			max_value=stoi(usr_input); //compile using C++11
			do_loop=false;
		}
		
	}while(do_loop);

	//calculate sum of multiples of 3 and 5 under max value
	for(int i=0;i<max_value;i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			answer +=i;
		}
	}
		
	//output answer
	cout<<"Answer: "<< answer <<endl;	
	
	return 0;
}
