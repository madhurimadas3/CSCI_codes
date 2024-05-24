// Shows current time in GMT
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Obtain the total seconds since the midnight of January 1, 1970
    time_t totalSeconds = time(0);
    // Compute the current second in the minute in the hour
    int currentSecond = totalSeconds % 60;
    // Obtain the total minutes
    int totalMinutes = totalSeconds / 60;
    // Compute the current minute in the hour
    int currentMinute = totalMinutes % 60;
    // Obtain the total hours
    int totalHours = totalMinutes / 60;
    // Compute the current hour 
    int currentHour = totalHours % 24;
    
    // Display result
    cout << "Current time is "<< currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;
    
    return 0;
    
}