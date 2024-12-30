#include <iostream>

using namespace std;

int main() {
    
    int count;
    
    cout << "enter the number of elements: ";
    cin  >> count;
    
    for ( int i = 1; i < count; i = i + 2){
        cout << i << endl;
    }

    return 0;
}
