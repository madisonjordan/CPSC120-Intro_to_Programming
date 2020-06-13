//Madison Jordan
//CPSC 120-15
//HW 08
//Desc: Menu program to calculate total of an order

#include <string>
using namespace std;

void displayMenu();
float calcOrder(string, float, int);
void calcTotal(float);

//variable for order
float order;


void displayMenu()
{
    cout<<"1) Hotdog        - $1.50\n"
        <<"2) Popcorn       - $3.10\n"
        <<"3) Hot Chocolate - $2.69\n"
        <<"4) Soft Drink    - $1.25\n"
        <<"5) QUIT\n";
}

float calcOrder(string item, float price, int quantity)
{
    //repeat order back to user
    cout<<endl<<item<<" - $"<<price<<" quantity: "<<quantity<<endl<<endl;
    
    order=price*quantity;
    
    //print total without tax
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Subtotal: $"<<order<<endl;
    
    return order;
}


void calcTotal(float total)
{
    //add 8% tax to total
    total = order+order*0.08;
        
    //print order with tax
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total: $"<<total<<endl<<endl;
}
