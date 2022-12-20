/* Coin counter lab, this app asks the user for a quantity of quarters, dimes, nickels and pennies
    to return an amount of dollars and remaining cents.*/

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

    // Ask user to input amount of quarters, dimes, nickels and pennies.
    cout << "Provide the amount of quarters, dimes, nickels and pennies separated by spaces ";
    cout << "respectevely." << endl;
    cin >> quarters >> dimes >> nickels >> pennies;

    // Compute cents and dollars.
    cents = QUARTERS_ * quarters + DIMES_ * dimes + NICKELS_ * nickels + pennies * PENNIES_;
    dollars = cents / DOLLAR_;
    cents = cents % DOLLAR_;

    // Display output.
    cout << "The total is " << dollars << " dollars and " << cents << " cents." << endl;

    return 0;
}