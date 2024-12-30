#include <iostream>

using namespace std;

int main()
{
    int level;
    
    cout << "enter your number of levels :";
    cin  >> level;
    
    for(int i = 1; i <= level; i++){
        for (int k = 0; k < level - i; k++)
            cout << " ";
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "*";
    cout << endl;
    }
    
    return 0;
}
