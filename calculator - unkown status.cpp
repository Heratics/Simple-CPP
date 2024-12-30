#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char op;
    double num[10];
    double result;
    double times = 0;
    double ops;

    cout << "this is a calculator" << endl << "input the sign \"=\" to calculate your inputs" << endl;

    cout << "+ = addition" << endl;
    cout << "- = subtraction" << endl;
    cout << "* = multiplication" << endl;
    cout << "/ = division" << endl;
    cout << "^ = power" << endl;
    cout << "2 = square root" << endl;
    cout << "3 = cubed root" << endl;
    cout << "c = cos(x)" << endl;
    cout << "s = sin(x)" << endl;
    cout << "t = tan(x)" << endl;
    cout << "l = logarithm" << endl;

    cout << "enter the number of operations: ";
    cin >> ops;

    while (times < ops)
    {

        cout << "Enter your operator (+,-,*,/,^,2,3,c,s,t,l) : ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "Enter your first value : ";
            cin >> num[0];

            cout << "Enter your second value : ";
            cin >> num[1];

            result = num[0] + num[1];
            cout << result;
            break;

        case '-':
            cout << "Enter your first value : ";
            cin >> num[0];

            cout << "Enter your second value : ";
            cin >> num[1];

            result = num[0] - num[1];
            cout << result;
            break;

        case '*':
            cout << "Enter your first value : ";
            cin >> num[0];

            cout << "Enter your second value : ";
            cin >> num[1];

            result = num[0] * num[1];
            cout << result;
            break;

        case '/':
            cout << "Enter your first value : ";
            cin >> num[0];

            cout << "Enter your second value : ";
            cin >> num[1];

            result = num[0] / num[1];
            cout << result;
            break;

        case '^':
            cout << "Enter your value : ";
            cin >> num[0];

            cout << "Enter your power : ";
            cin >> num[1];

            result = pow(num[0], (int)num[1]);
            cout << result;
            break;

        case '2':
            cout << "Enter your value : ";
            cin >> num[0];

            result = sqrt(num[0]);
            cout << result;
            break;

        case '3':
            cout << "Enter your value : ";
            cin >> num[0];

            result = cbrt(num[0]);
            cout << result;
            break;

        case 'c':
            cout << "Enter your value : ";
            cin >> num[0];

            result = cos(num[0]);
            cout << result;
            break;

        case 's':
            cout << "Enter your value : ";
            cin >> num[0];

            result = sin(num[0]);
            cout << result;
            break;

        case 't':
            cout << "Enter your value : ";
            cin >> num[0];

            result = tan(num[0]);
            cout << result;
            break;

        case 'l':
            cout << "Enter your value : ";
            cin >> num[0];

            result = log(num[0]);
            cout << result;
            break;

        default:
            // if the operator is not one that is supported this error code message below will be shown
            cout << "Error! Please input a supported operator";
            break;
        }

        times++;
        cout << endl; // Add a newline for better readability between operations
    }

    return 0;
}
