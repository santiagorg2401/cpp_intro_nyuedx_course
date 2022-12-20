/* This programs takes a character input by the user via command line and prints its
    UPPER case representation.*/

#include <iostream>
using namespace std;

int main()
{
    char lowerCaseLetter, upperCaseLetter;
    int offset;

    cout << "Please enter a lower case letter: " << endl;
    cin >> lowerCaseLetter;

    offset = (int)(lowerCaseLetter - 'a');
    upperCaseLetter = (char)('A' + offset);

    cout << "The uppercase version of " << lowerCaseLetter << " is " << upperCaseLetter << endl;

    return 0;
}