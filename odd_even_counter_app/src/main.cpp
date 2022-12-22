/* Counts 4 positive integers and returns if there are more evens, odds or same amount.*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, evens = 0, odds = 0;
    cout << "Enter 4 positive integers separated with a space.\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 2 == 0)
        evens += 1;
    else
        odds += 1;

    if (num2 % 2 == 0)
        evens += 1;
    else
        odds += 1;

    if (num3 % 2 == 0)
        evens += 1;
    else
        odds += 1;

    if (num4 % 2 == 0)
        evens += 1;
    else
        odds += 1;

    if (evens > odds)
        cout << "More evens.\n";
    else if (evens < odds)
        cout << " More odds.\n";
    else
        cout << "Same number of evens and odds.\n";

    return 0;
}