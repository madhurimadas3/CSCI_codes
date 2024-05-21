// A vehicle is traveling from point p1 to p2 in the interval t1 to t2. 
// Compute the velocity
// Velocity = (p2-p1)/(t2-t1)

#include <iostream>
using namespace std;

int main()
{
  float p1, //start point
        p2, //end point
        t1, //time at start point
        t2, //time at end point
        V;  //Velocity
        
     // Display a message for the user to input two points and read them in.
     cout << endl << "Enter points p1 and p2: ";
     cin >> p1 >> p2;
     
     // Display a message for the user to input two time readings for p1 and p2
     cout << endl << "Enter times t1 and t2: ";
     cin >> t1 >> t2;
     
     // Calculate and display the Velocity
     V = (p2 - p1)/(t2 - t1);
     cout << "The Velocity is "<< V << endl;
}
