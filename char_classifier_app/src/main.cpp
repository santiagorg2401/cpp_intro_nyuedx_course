/* Classifies an user input character if it is:
 * Uppercase.
 * Lowercase.
 * Digit.
 * Not an alpha-numeric character. */

#include <iostream>
using namespace std;

int main()
{
    char ussrChar;

    cout << "Enter a character:\n";
    cin >> ussrChar;

    if (ussrChar >= 'a' && ussrChar <= 'z')
    {
        cout << ussrChar << " is a lowercase character.\n";
    }
    else if (ussrChar >= 'A' && ussrChar <= 'Z')
    {
        cout << ussrChar << " is an uppercase character.\n";
    }
    else if (ussrChar >= '0' && ussrChar <= '9')
    {
        cout << ussrChar << " is a digit.\n";
    }
    else
    {
        cout << ussrChar << " is not an alpha-numeric character\n";
    }

    return 0;
}