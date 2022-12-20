/* This app calculates the BMI using the formula:
    BMI = weight/height^2
    weight and height are user input.*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Set up variables.
    float weight, height, BMI;

    // Load user input.
    cout << "Enter weight [kg] and height [m] separated by a space.\n";
    cin >> weight >> height;

    // Compute BMI.
    BMI = weight / (height * height);

    // Display output.
    cout << fixed << setprecision(2) << "BMI is " << BMI << endl;

    return 0;
}