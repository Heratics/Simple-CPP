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
    int level;
    
    cout << "enter your number of levels :";
    cin  >> level;
    
    for(int i = 0; i < level; i++){
    
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        
    cout << endl;
    }
    return 0;
}
