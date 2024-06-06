// Transformation of the formula celcius = (5.0/9)*(fahrenheit-32)
#include <iostream>
using namespace std;

int main()
{
 // Prompt the user to enter temperature in fahrenheit
    int fahrenheit;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit; 

 // Convert from fahrenheit to celsius
    int celsius;
    celsius = (5.0/9)*(fahrenheit - 32);
    
    cout << "Temperature in celsius : " << celsius << " ";
    
    return 0;
}