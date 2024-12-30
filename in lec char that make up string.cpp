/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string complete;
    char letter;
    
    char sentinel = '0';
    
    cin >> letter;
    
    while (letter != sentinel) 
    {
        complete = complete + letter;
        cin >> letter;
    }
    
    cout << complete;
    
    return 0;
}
