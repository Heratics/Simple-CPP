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
    int level;
    
    cout << "enter your number of levels :";
    cin  >> level;
    
    for(int i = 1; i <= level; i++){
        for (int k = 0; k < level - i; k++)
            cout << " ";
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "*";
    cout << endl;
    }
    
    return 0;
}