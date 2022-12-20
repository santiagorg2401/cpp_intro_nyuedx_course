/* Converts time from 24 hour format to 12 hour format.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour24, hour12, min;
    string period;
    char temp; // stream delimiter.

    cout << "Enter a time in 24 hour format separated by a space.\n";
    cin >> hour24 >> temp >> min;

    if (hour24 >= 0 && hour24 <= 11)
    {
        if (hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;

        period = "AM";
    }
    else
    {
        if (hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 - 12;

        period = "PM";
    }

    cout << hour24 << ":" << min << " is " << hour12 << ":" << min << " " << period << endl;

    return 0;
}