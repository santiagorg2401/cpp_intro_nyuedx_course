/* Takes user input character and returns its ASCII value.*/

#include <iostream>
using namespace std;

int main()
{
    char inputChar;
    int asciiValue;

    cout << "Enter a character:" << endl;
    cin >> inputChar;
    asciiValue = (int)inputChar;
    cout << "the ASCII value of " << inputChar << " is " << asciiValue << endl;

    return 0;
}