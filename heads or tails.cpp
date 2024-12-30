/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short MaxValue = 2;
    const short MinValue = 1;

    srand(time(0));
    short num1;

        num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;

    if (num1 == 1)
        cout << "Heads";

    else if (num1 == 2)
        cout << "Tails";

    return 0;
}
