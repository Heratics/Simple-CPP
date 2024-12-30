/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout << "welcome to the simple calculator for addition" << endl;
    cout << "enter the first value : " << endl;
    cin  >> x;
    cout << "enter the second value : " << endl;
    cin  >> y;
    int z = x + y;
    cout << "calculations lead to : " << endl << x << "+" << y << "=";
    cout << z;

    return 0;
}