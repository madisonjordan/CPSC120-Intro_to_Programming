//Madison Jordan
//CPSC 120-15
//Homework 05
//Bonus: None
//Desc: Draws a Rectangle when given a string

#include <iostream>
#include <string>
using namespace std;



//create DrawRectangle()
void DrawRectangle(int width, int height)
{
	//loop lines until height
	for(int i=0;i<height;i++)
	{
		//loop characters until width
		for(int j=0;j<width;j++)
		{
			cout<<'*';
		}		
		cout<<endl;
	}	
}

void DrawRectangle(string word, int height)
{	
	//loop lines until height
	for(int i=0;i<height;i++)
	{
			cout<<word<<endl;
	}	
}




int main()
{
	//create variables
	string word;
	int height;
	
	char usr_input;
	
	
	
	do
	{
		//user prompt
		cout<<"Enter a number or word for width: ";
		cin>>width;
	
		cout<<"Enter a height: ";
		cin>>height;
	
	
		//convert string to integer
		if(isdigit(width[0]))
		{
			int width = stoi(word);
			//Draw Rectangle
			DrawRectangle(width,height);
		}
		else
		{
			//Draw rectangle
			DrawRectangle(width,height);
		}
	
	//user prompt to contine
	cout<<"Would you like to continue? y/n"<<endl;
	cin>>usr_input;
	
	
	}while (usr_input == 'y' || usr_input == 'Y');
	
	return 0;	
}
