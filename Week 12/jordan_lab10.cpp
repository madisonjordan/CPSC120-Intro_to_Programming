//Madison Jordan
//CPSC 120-15
//Lab 10
//Desc: write and read user input from a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string phrase;
    string usr_input;
    
    ofstream out_file;
    ifstream in_file;
    
    out_file.open("output.txt");
    
    do
    {
        cout<<"What would you like to record?"<<endl;
        
        //write user input to file
        getline(cin,phrase);
        out_file<<phrase<<endl;
        
        //user prompt to continue
        cout<<"Anything else? (y or n)"<<endl;
        getline(cin,usr_input);
        
    }while(usr_input == "Y" || usr_input =="y");
    
    out_file.close();
    
    return 0;
}
