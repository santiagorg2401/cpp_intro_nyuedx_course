/*Write a program that reads a positive integer n, and prints the first
n even numbers.

For example, one execution would look like this:
Please enter a positive integer: 3
2
4
6*/

#include <iostream>
using namespace std;

int main()
{
    int count, num = 2;
    cout << "Please enter a positive integer: \n";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << num << endl;
        num += 2;
    }

    return 0;
}