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
