//Madison Jordan
//CPSC 120-15
//Lab 11
//Desc: Pointers

#include <iostream>
using namespace std;

void task1();
void task2();
void potato(int *p1, int *p2);
void task3();

    
int main()
{
    cout<<endl<<"Task 1:"<<endl;
    task1();
    
    cout<<endl<<endl<<"Task 2:"<<endl;
    task2();
    
    cout<<endl<<endl<<"Task 3:"<<endl;
    task3();
    
    return 0;
}


void task1()
{
    //initialize variables and set values
    int foo = 42;
    int bar = foo;
    int *baz = &foo;
    
    //print value and address
    cout<<"foo: "<<foo<<" @ "<<&foo<<endl;
    cout<<"bar: "<<bar<<" @ "<<&bar<<endl;
    cout<<"baz: "<<baz<<" @ "<<&baz<<endl;
}

void task2()
{
    //create array
    int arr[5]={5,10,15,20,25};
    
    //print values
    cout<<arr[0]<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*(arr+4)<<endl;
}

void potato(int *p1, int *p2)
{
    //create temporary variable
    int temp;
    
    //shift/swap varibles
    temp = * p1;
    * p1 = * p2;
    * p2 = temp;
    
}

void task3()
{
    //set values
    int value01=17;
    int value02=42;
    
    
    //print initial values
    cout<<"value01: "<<value01<<endl;
    cout<<"value02: "<<value02<<endl;
    
    //swap values
    potato(&value01, &value02);
    
    //print final values
    cout<<"SWAP"<<endl<<"value01: "<<value01<<endl;
    cout<<"value02: "<<value02<<endl;
}

