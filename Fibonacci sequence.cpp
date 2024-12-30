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
