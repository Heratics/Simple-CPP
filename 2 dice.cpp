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

int main() {

    const short MaxValue = 6;
    const short MinValue = 1;

    srand(time(0));
    short num1 = (rand() % (MaxValue - MinValue +1)) + MinValue;
    short num2 = (rand() % (MaxValue - MinValue +1)) + MinValue;

    cout << "Your first dice : " << num1 << endl;
    cout << "Your second dice : " << num2;

    return 0;
}