#include <iostream>

using namespace std;

int main() {
    
    int x = 1;
    while (x < 19)
    {
        x = x * 2;
        cout << x << endl;
        
        //if (x == 16)break; --> cuts off loop at a certain value
    }

    return 0;
}
