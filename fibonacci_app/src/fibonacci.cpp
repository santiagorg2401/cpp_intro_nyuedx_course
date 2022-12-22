/*Fibonacci number is a series of numbers in which each number is the sum of the two preceding numbers. The first two numbers in the series are the number 1.  Write a program to print first n Fibonacci Numbers

Fn = Fn-1 + Fn-2

For example, one execution would look like this:
Please enter a positive integer greater than 1: 4
1
1
2
3*/

#include <iostream>
using namespace std;

int main()
{
    int n, F_n, F_n1 = 1, F_n2 = 1;
    cout << "Please enter a positive integer greater than 1: \n";
    cin >> n;

    // Display first 2 digits.
    cout << F_n1 << endl
         << F_n2 << endl;

    for (int i = 0; i < (n - 2); i++)
    {
        // Calculate Fibonacci.
        F_n = F_n1 + F_n2;

        // Display it.
        cout << F_n << endl;

        // Update Fibonacci.
        F_n2 = F_n1;
        F_n1 = F_n;
    }

    return 0;
}