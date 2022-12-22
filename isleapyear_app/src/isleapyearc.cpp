/*Write a program for determining if a year is a leap year. In the Gregorian calendar
system you can check if it is a leaper if it is divisible by 4 but not by 100 unless it is also divisible by 400.

For example, 1896, 1904, and 2000 were leap years but 1900 was not.
Write a program that takes in a year as input (as a command line argument) and prints the string "{year} was a leap year'' if true and "{year} was not a leap year'' if false.
Note: background on leap year https://en.wikipedia.org/wiki/Leap_year*/

#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int year = stoi(argv[1]);

    if (year % 400 == 0)
        cout << year << " was a leap year.\n";

    if (year % 100 == 0)
        cout << year << " was not a leap year.\n";

    if (year % 4 == 0)
        cout << year << " was a leap year.\n";
    else
        cout << year << " was not a leap year.\n";

    return 0;
}