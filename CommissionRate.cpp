// A program that calculates the end-of-month commission
#include <iostream>
using namespace std;

int main()
{
    // Prompt the user to monthly sales
    double sales;
    cout << "Enter your monthly sales: ";
    cin >> sales;
    // Determine the commission rate 
    double commission_rate;
    if (sales < 10000)
    {
        commission_rate = sales*0.05;
    }
    else if (sales >= 10000 && sales <= 14999)
    {
        commission_rate = sales*0.1;
    }
    else if (sales >= 15000 && sales <= 17999)
    {
        commission_rate = sales*0.12;
    }
    else if (sales >= 18000 && sales <= 21999)
    {
        commission_rate = sales*0.14;
    }
    else if (sales >= 22000)
    {
        commission_rate = sales*0.16;
    }
    else
    {
        cout << "Error!Invalid input.";
    }
  
    // Prompt the user to enter any advanced pay received
    double advance;
    cout << "How much have you received as advance payment?";
    cin >> advance; 
        
        // Determine if the advance payment is less than or equal to $1500
        if (advance > 1500)
        {
            cout << "Advance payment cannot exceed $1500" << endl;
            return 1; //Exit the program 
        }
        
    // Calculate the end-of-month commision rate
    // end-of-month = EOM 
        
    if (advance < commission_rate)
    {
        double EOM;
        EOM = commission_rate - advance; 
        cout << "Your end-of-month commission is $" << EOM << endl;
    }
    else if (advance > commission_rate)
    {
        double reimburse; 
        reimburse = advance - commission_rate;
        cout << "You need to reimburse $" << reimburse << endl;
    }
    
    
    
    return 0;
}
