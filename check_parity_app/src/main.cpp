// Check numbers parity and print its result.

#include <iostream>
using namespace std;

int main()
{
    int number;
    bool parity;
    cout << "Enter a positive integer.\n";
    cin >> number;

    if (number % 2 == 0)
    {
        parity = true;
        cout << "Number is even.";
    }
    else
    {
        parity = false;
        cout << "Number is odd.";
    }

    return 0;
}