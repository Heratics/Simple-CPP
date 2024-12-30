#include <iostream>

using namespace std;

int main() {
    
    int count;
    
    cout << "enter the number of elements: ";
    cin  >> count;
    
    for ( int i = 1; i <= count; i = i + 2){
        if (i % 2 == 1)
            cout << i << " ";
    }

    return 0;
}
