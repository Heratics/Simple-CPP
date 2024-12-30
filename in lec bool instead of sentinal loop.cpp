#include <iostream>

using namespace std;

int main() {
    
    bool flag = false;
    
    int x;
    
    while (!flag)
    {
        cin >> x;
        if ( x > 10 )
        flag = true;
    }
    
    return 0;
}
