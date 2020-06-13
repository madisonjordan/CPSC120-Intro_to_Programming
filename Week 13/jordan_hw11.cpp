//Madison Jordan
//CPSC 120-15
//HW 11
//Desc: Read from a file and sort an array

#include <iostream>
#include <fstream>
using namespace std;


void read_arr(int * my_array, int size);
void sort_arr(int * my_array, int size);
void print_arr(int * my_array, int size);


int main()
{
    //create array
    int my_array[100];
    
    //call functions
    read_arr(my_array, 100);
    sort_arr(my_array,100);
    print_arr(my_array,100);
    
    return 0;
}


void read_arr(int * my_array, int size)
{
    //create in files
    ifstream in_file;
    
    //open file
    in_file.open("in.txt");
    
    //read file
    for(int i=0;i<size;i++)
    {
        in_file>>my_array[i];
    }
    

}

void sort_arr(int * my_array, int size)
{
    //create temp variable
    int temp;
    
    //loop through 1st number
    for(int i=0;i<size-1;i++)
    {
        //loop through 2nd number
        for(int j=i+1;j<size;j++)
        {
            //2nd number is smaller
            if(my_array[i] > my_array[j])
            {
                //swap values
                temp = (my_array[j]);
                (my_array[j]) = (my_array[i]);
                (my_array[i]) = temp;
                    
            }
 
        }
            
    }
    
}

void print_arr(int * my_array, int size)
{
    //print array
    for (int i=0;i<size;i++)
    {
        cout<<my_array[i]<<endl;
    }

}
