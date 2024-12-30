/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

double larger (double num1, double num2)
{
    double max;

    if (num1 > num2)
        max = num1;
    else if (num2 > num1)
        max = num2;
    else {
        cout << "Error! Enter 2 different values." << endl;
    return 0;
    }

  return max;
}

int main ()
{
    double num1, num2;

    cout << "Enter the first value :";
    cin  >> num1;

    cout << "Enter your second value :";
    cin  >> num2;

    cout << larger (num1, num2);

  return 0;
}
