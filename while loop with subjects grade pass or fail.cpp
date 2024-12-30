/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int subjects = 0;
    int grade;

    while (subjects < 3) {
        subjects++;
        
        cout << "Enter grade " << subjects + 1 << ": ";
        cin >> grade;

        if (grade > 50) 
            cout << "Pass" << endl;
 
        else 
            cout << "Fail" << endl;

    }

    return 0;
}
