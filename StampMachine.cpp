// Stamp Machine
#include <iostream>
using namespace std;

int main()
{
    int dollars;
    int First_Class_Stamps = 47; // 47 cents per first-class stamp
    int Penny_Stamps = 1; //  1 cent per penny stamp
    
    cout << "Welcome to the Stamp Vending Machine!" <<endl<< "Please Enter dollar amount:";
    cin >> dollars;
    First_Class_Stamps = (dollars*100)/47;
    Penny_Stamps = (dollars*100)%47;
    
    cout<< "You have "<< First_Class_Stamps << " First Class Stamps and " << Penny_Stamps << " Penny Stamps" <<endl<< "Thank you!";
    

    return 0;
}
