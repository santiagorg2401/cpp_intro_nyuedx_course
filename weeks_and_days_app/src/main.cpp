/* This programs calculates the amount of weeks and days traveled by the user
    by computing the total days entered by them in command line.*/

#include <iostream>
using namespace std;

const int DAYS_IN_WEEK = 7;

int main()
{
    // Set up variables.
    int daysTraveled;
    int weeks, days;

    // Store user input.
    cout << "Enter the total number of days you traveled:" << endl;
    cin >> daysTraveled;

    // Calculate weeks and days from total amount of days.
    weeks = daysTraveled / DAYS_IN_WEEK;
    days = daysTraveled % DAYS_IN_WEEK;

    // Display output.
    cout << daysTraveled << " days are " << weeks << " weeks and " << days << " days." << endl;

    return 0;
}