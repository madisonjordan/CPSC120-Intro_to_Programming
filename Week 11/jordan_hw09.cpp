  //Madison Jordan
//CPSC 120-15
//HW 09
//Bonus: Yes
//Desc: Print largest prime factor of a number

#include <iostream>
using namespace std;

int main()
{
    //varible for target
    long target;

    //user prompt for target number
    cout<<"What number would you like to factor?"<<endl;
    cin>>target;
    
    //target = 600851475143;
    
    //check if number is divisble by 2 but is not 2
    while(target%2==0 && target!=2)
    {
        target=target/2;
    }
    
    //skip all even numbers
    for (long i=3; i<target; i+=2)
    {
        //check if target is divisible by any number before it
        if (target % i == 0)
        {
  
            //divide the number by a small prime factor to find a new target to factor
            target=target/i;
            
            //count back to see if number is still divisible
            i-=2;
        }
    }
    
    //print largest
    cout<<target<<endl;

    
    return 0;
}
