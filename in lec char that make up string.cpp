#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string complete;
    char letter;
    
    char sentinel = '0';
    
    cin >> letter;
    
    while (letter != sentinel) 
    {
        complete = complete + letter;
        cin >> letter;
    }
    
    cout << complete;
    
    return 0;
}
