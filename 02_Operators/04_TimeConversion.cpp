// Convert total seconds into hours, minutes, and seconds.
#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    
    cout << "Enter the total number of seconds: ";
    cin >> totalSeconds;
    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    
    cout << "Time format (hh:mm:ss): ";
    cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    
    return 0;
}
