//Madison Jordan
//CPSC 120-15
//Lab 06
//Desc: Reverse the letters of a word input by the user

#include <iostream>
using namespace std;

void ReverseLetters(char word[], int length)
{	
	//loop index in reverse
	for(int i=length-1;i>=0;i--)
	{
		cout<<word[i];
	}
	cout<<endl;
}

int main()
{
	//create varibles
	int length;
	

	while(1==1)
	{	
		//user instructions to quit
		cout<<"press CTRL+C to quit at any time"<<endl;
		
		//user prompt for word length and word
		cout<<"Enter the length of your word: ";
		cin>>length;
		
		char word[length];
		
		cout<<"Enter your word: ";
		cin>>word;
		
		//Reverse letters
		ReverseLetters(word, length);
	}

	return 0;
}
