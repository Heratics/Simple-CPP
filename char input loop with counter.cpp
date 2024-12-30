#include <iostream>

using namespace std;

int main() {
    
    int count = 0;
    char ch;
    
    while( ch != '0'){
        cin >> ch;
        count++;
    }
    
    cout << "you entered " << count << " characters";

    return 0;
}
