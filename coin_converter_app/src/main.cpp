/* Takes an amount of dollars and cents and converts it back into quarters, dimes, nickels
    and pennies.*/

#include <iostream>
using namespace std;

/* The following coin values are used:
dollar = 100 cents.
quarters = 25 cents.
dimes = 10 cents.
nickels = 5 cents.
pennies = 1 cent.
*/

const int DOLLAR_ = 100, QUARTERS_ = 25, DIMES_ = 10, NICKELS_ = 5, PENNIES_ = 1;

int main()
{
    // Set up variables.
    int quarters, dimes, nickels, pennies, dollars, cents;

    // Ask user to input dollars and cents.
    cout << "Enter the amount of dollars and cents to convert separated by a space respectevely.\n";
    cin >> dollars >> cents;

    // Compute convertions.
    cents += dollars * DOLLAR_;
    quarters = cents / QUARTERS_;
    cents -= quarters * QUARTERS_;
    dimes = cents / DIMES_;
    cents -= dimes * DIMES_;
    nickels = cents / NICKELS_;
    cents -= nickels * NICKELS_;
    pennies = cents;

    // Display output.
    cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies.";
    return 0;
}