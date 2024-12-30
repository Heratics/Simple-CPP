/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    //this is called short circuit evaluation where the first sentenct is true
    //the compiler doesnt bother to read the other after && or || and just takes it as is
    
    int x = 5;
    if (100 > 10 && ++x > 0)
        std::cout << 10;
        
    std::cout << x;
    
    return 0;
}