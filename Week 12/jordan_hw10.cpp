//Madison Jordan
//CPSC 120-15
//HW 10
//Desc: read an encoded message from a file and decode it

#include <fstream>
using namespace std;

int main()
{
    //create in and out files
    ifstream in_file;
    ofstream out_file;
    
    //create variables
    string my_line;
    char my_letter;
    
    //read encoded file
    in_file.open("encoded.txt");
    getline(in_file,my_line);
    
    //open out file
    out_file.open("decoded.txt");
    
    
    for(int i=0; i<my_line.length();i++)
    {
        my_letter=my_line[i];
        
        //shift letter 13 up if 1-13 letters in alphabet
        if((my_letter >='a' && my_letter <= 'm') || (my_letter >= 'A' && my_letter <= 'M'))
        {
            my_letter=my_letter + 13;
            
            //write decoded letter to outfile
            out_file<<my_letter;
        }
        //shift letters 13 back if 14-26 letters in alphabet
        else if ((my_letter >='n' && my_letter <= 'z') || (my_letter >='N' && my_letter <= 'Z'))
        {
            my_letter=my_letter - 13;
            
            //write decoded letter to outfile
            out_file<<my_letter;
        }
    }
    //write endl to out file
    out_file<<endl;
    
    //close out file
    out_file.close();

    
    return 0;
}
