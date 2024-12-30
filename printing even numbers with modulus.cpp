/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    
    int count;
    
    cout << "enter the number of elements: ";
    cin  >> count;
    
    for ( int i = 0; i <= count; i = i + 2){
        if (i % 2 == 0)
            cout << i << " ";
    }

    return 0;
}