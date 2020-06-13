//Madison Jordan
//CPSC 120-15
//Lab 03
//Desc: uses if/else branching to simulate a gameshow to win a prize behind a door

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	//create varible for user input
	double door_number;
	
	//store description
	string desc = 
	"Welcome to Let's Make a Deal!\n"
	"=============================\n"
	"Behind one of these 3 doors is a brand new car!\n"
	"Behind the other two are goats. Guess the door with the hidden car and you win!";
	
	//display game desciption
	cout<< desc << endl;
	
	//user prompt
	cout<< "Choose a door: ";
	cin>>door_number;
	
	//randomize correct answer
	srand(time(NULL));
	int car = rand() % 3 +1;
	
	
	//branching for possible outcomes
	if(door_number==1 || door_number==2|| door_number==3)
	{	
		if(car == door_number)
		{
		cout<<"You chose door number "<< door_number <<", revealing a brand new car!" << endl;
		}
		else if (car != door_number)
		{
			cout<<"You chose door number "<< door_number <<", revealing a goat!" <<endl;
		}
	}
	else
	{
		cout<< "I'm sorry. That is not a door number. You lose. Thanks for playing!" <<endl;
	}


	return 0;
}	


