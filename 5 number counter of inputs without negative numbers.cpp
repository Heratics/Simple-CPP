/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    
   int num;
   int counter = 5;
   
   while(counter > 0)
   {
       cin  >> num;
       
       if (num < 0)
        continue;
        
       cout << num << " "; 
       
       counter--;
   }
    
    return 0;
}