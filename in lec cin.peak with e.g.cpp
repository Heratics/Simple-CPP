#include <iostream>

using namespace std;

int main()

{
    char x, y, z;
    int w;
    cin >> x;
    cin.get(y);
    z = cin.peek();
    cin >> w;
    
    cout << x << y << z << w;
    
    return 0;
}
