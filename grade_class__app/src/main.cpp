/* Classifies a pair of grades wheter the student failed, passed or passed with honors. */

#include <iostream>
#include <string>
using namespace std;

const int FAILED_THRES = 60, HONORS_THRES = 95;

int main()
{
    int grad1, grad2;
    string msg;
    cout << "Enter your scores separated by a space.\n";
    cin >> grad1 >> grad2;

    if (grad1 < FAILED_THRES && grad2 < FAILED_THRES)
    {
        msg = "Failed.";
    }
    else if (grad1 >= HONORS_THRES && grad2 >= HONORS_THRES)
    {
        msg = "Graduated with honors.";
    }
    else
    {
        msg = "Graduated.";
    }

    cout << "Student " << msg << endl;

    return 0;
}