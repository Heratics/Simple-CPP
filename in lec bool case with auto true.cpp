#include <iostream>

using namespace std;

int main() {

    bool x = false;
    int y = 50; // the non-bool value as in not true or false is turned into an automatic true without anything else 
    
    if (y)
        cout << 10;
        cout << 20;
    
    return 0;
}
