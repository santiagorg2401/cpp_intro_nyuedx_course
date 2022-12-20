/* Reads a simple expression, computes it and prints its output.*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, res;
    char op;
    bool ok = true;

    cout << "Enter a mathematical expression.\n";
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        cout << "Illegal operator.";
        ok = false;
        break;
    }

    if (ok == true)
        cout << num1 << op << num2 << " = " << res << endl;

    return 0;
}