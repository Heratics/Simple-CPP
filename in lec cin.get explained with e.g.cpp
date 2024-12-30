// cin.get means it pulls any character it sees including a space

#include <iostream>

using namespace std;

int main()
{
    
    char x, y, z;
    
    cin >> x;
    
    cin.get(y);
    
    cin >> z;
    
    cout << x << y << z;
    
    return 0;
}
