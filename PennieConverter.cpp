#include <iostream>
using namespace std;

int main()

{

    int pennies,dollar,quarter,dimes,nickels,remaining_pennies;
   
    cout<< "Enter Penny amount: ";
    cin>>pennies;
    dollar = pennies/100;
    remaining_pennies = pennies%100;
    quarter = remaining_pennies/25;
    remaining_pennies = remaining_pennies%25;
    dimes = remaining_pennies/10;
    remaining_pennies= remaining_pennies%10;
    nickels= remaining_pennies/5;
    remaining_pennies= remaining_pennies%5;
    
    cout<< "Your amount is: " <<dollar<< " dollars " <<quarter<< " quarters " <<dimes<< " dimes " <<nickels<< " nickels " <<remaining_pennies<< " pennies ";
    
    
    return (0);
}