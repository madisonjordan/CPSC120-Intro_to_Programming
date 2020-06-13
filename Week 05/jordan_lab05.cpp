//Madison Jordan
//CPSC 120-15
//Lab 05
//Desc: Draws a Rectangle when given a width and height
	
#include <iostream>
using namespace std;
 
//create DrawRectangle()
void DrawRectangle(int width,int height)
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

int main()
{
	//create variables
	int width;
	int height;
	
	char usr_input;
	
	
	do
	{
		//user prompt
		cout<<"Enter a width: ";
		cin>>width;
	
		cout<<"Enter a height: ";
		cin>>height;
	
		//Draw rectangle
		DrawRectangle(width,height);
	
		//user prompt to contine
		cout<<"Would you like to continue? y/n"<<endl;
		cin>>usr_input;
	
	}while (usr_input == 'y' || usr_input == 'Y');
	
	return 0;	
}
