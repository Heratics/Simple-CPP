#include <iostream>

using namespace std;

int main() {

    char salary;
    
    cout << "h = high income" << endl;
    cout << "m = middle class" << endl;
    cout << "l = lower class" << endl;
    cout << "e = unemployed" << endl;
    
    cin >> salary;
    
    switch (salary) {
        
        case 'h':
            cout << "your salary is over 10000";
            break;
            
        case 'm':
            cout << "your salary is between 500 and 1000";
            break;
            
        case 'l':
            cout << "your salary is under 500";
            break;
            
        case 'e':
            cout << "you have no salary";
            break;
            
        default:
            cout << "you have not input a correct input";
    }
    
    return 0;
}
