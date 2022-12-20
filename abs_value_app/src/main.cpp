/* Calculates the absolutea of a number and prints its result.*/

#include <iostream>
using namespace std;

int main()
{
    int userInput, abs;
    cout << "Enter an integer: \n";
    cin >> userInput;

    if (userInput < 0)
    {
        abs = userInput * -1;
    }
    else
    {
        abs = userInput;
    }

    cout << "|" << userInput << "| = " << abs << endl;
    return 0;
}