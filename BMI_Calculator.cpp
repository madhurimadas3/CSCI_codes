// BMI Calcultor
// BMI = Body mass index
// BMI = (Body weight in Kilogrmas)/(height in meters)^2 
#include <iostream>
using namespace std;
int main () {
    // Enter body weight & height
    float weight_pound,
          height_inches,
          Weight_kg,
          Height_m,
          bmi;
    
    cout<< endl << "Enter your weight(in pounds): ";
    cin>> weight_pound;
    cout << endl << "Enter yout height(in inches): ";
    cin>> height_inches;
    
    // Calculate Equivalent weight in kg and height in meters
    const float KILOGRAMS_PER_POUND = 0.45359237; // constant
    const float METERS_PER_INCH = 0.0254; // constant
    Weight_kg = KILOGRAMS_PER_POUND * weight_pound;
    Height_m = METERS_PER_INCH * height_inches;
    
    // BMI Calculation
    bmi = (Weight_kg)/(Height_m*Height_m);
    
   // Display result 
    if (bmi < 18.5)
    cout << "Underweight" << endl;
    else if (bmi < 25)
    cout << "Normal" << endl;
    else if (bmi < 30)
    cout << "Overweight" << endl;
    else 
    cout << "Obese" << endl;
    
    return 0;
    
}