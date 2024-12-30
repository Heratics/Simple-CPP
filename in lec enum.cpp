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
    enum colours {red, green, blue, black};

    colours one , two, three;

    one = green;
    two = black;
    two = blue;
    three = one + one; // error due to this line of code changing the data type for the varibale

    switch (one){
        case 0:
            cout << "red";
            break;
        case 1:
            cout << "green";
            break;
        case 2:
            cout << "blue";
            break;
        case 3:
            cout << "black";
            break;
    }

  return 0;
}
