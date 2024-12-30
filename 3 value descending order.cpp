/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;

    cout << "first value : ";
    cin  >> num1;

    cout << "second value : ";
    cin  >> num2;

    cout << "third value : ";
    cin  >> num3;

    cout << "The values in descending order are as follows : " << endl;

    if (num1 > num2 && num1 > num3)
        if (num2 > num3)
            cout << num1 << endl << num2<< endl << num3<< endl;
        else
            cout << num1 << endl << num3 << endl << num2<< endl;

    if (num2 > num1 && num2 > num3)
        if (num1 > num3)
            cout << num2 << endl << num1 << endl << num3 << endl;
        else
            cout << num2 << endl << num3 << endl << num1 << endl;

    if (num3 > num1 && num3 > num2)
        if (num1 > num2)
            cout << num3 << endl << num1 << endl << num2 << endl;
        else
            cout << num3 << endl << num2 << endl << num1 << endl;

    return 0;
}
