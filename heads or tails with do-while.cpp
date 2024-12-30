/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    const short MaxValue = 11;
    const short MinValue = 1;
    const short ExcludedValue = 6;

    srand(time(nullptr));
    short num1;

    do {
        num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
    } while (num1 == ExcludedValue);

    if (num1 > 6)
        cout << "Heads";

    else if (num1 < 6)
        cout << "Tails";

    return 0;
}
