#include <iostream>

using namespace std;

int main() {
    
    int count;
    
    cout << "enter the number of elements: ";
    cin  >> count;
    
    for ( int i = 0; i <= count; i = i + 2){
        cout << i << " ";
    }

    return 0;
}
