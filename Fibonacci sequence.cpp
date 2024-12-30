/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 

using namespace std; 

int main() {  
    
    int num1 = 1;
    int num2 = 1;
    int num3;
    int count;
    
    cout << "Enter the number of elements: ";    
    cin >> count;    
    
    cout << num1 << " " << num2 << " "; 
    
    for(int i = 2; i < count; ++i){    
        
    num3 = num1 + num2;    
    cout << num3 << " ";    
    num1 = num2;    
    num2 = num3;    
}
     
   return 0;  
    
} 
