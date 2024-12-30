#include <iostream>

using namespace std;

int main() {
    int subjects = 0;
    int grade;

    while (subjects < 3) {
        subjects++;
        
        cout << "Enter grade " << subjects + 1 << ": ";
        cin >> grade;

        if (grade > 50) 
            cout << "Pass" << endl;
 
        else 
            cout << "Fail" << endl;

    }

    return 0;
}
