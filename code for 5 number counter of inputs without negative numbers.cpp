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
