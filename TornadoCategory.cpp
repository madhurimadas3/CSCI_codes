// A program that classifies a tornado based on its wind speed
#include <iostream>
using namespace std;

int main()
{
    // Prompt the user to enter the wind speed of a tornado in mph
    int speed;
    cout << "Enter the wind speed of the tornado in mph: ";
    cin >> speed;
    
    // Conditions to identify the tornado
    if (speed < 73)
    {
        cout << "F0 category";
    }
    else if (speed < 113)
    {
        cout << "F1 category";
    }
    else if (speed < 157)
    {
        cout << "F2 category";
    }
    else if (speed < 207)
    {
        cout << "F3 category";
    }
    else if (speed < 261)
    {
        cout << "F4 category";
    }
    else if (speed < 317)
    {
        cout << "F5 category";
    }
    else 
    {
        cout << "Error!Invalid input.";
    }
 
    
    return 0;
}
