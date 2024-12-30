#include <iostream>

using namespace std;

int main(){
    int level;

    cout << "Enter your number of levels: ";
    cin >> level;

    for (int i = 1; i <= level; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << i << j;
        }
        cout << endl;
    }
    
    return 0;
}
