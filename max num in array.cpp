/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int count;

    cout << "Enter the number of elements you need to input: ";
    cin >> count;

    int array1[count];

    int max_value = 0;
    int max_index = 0; // Variable to store the index of the maximum value

    for (int i = 0; i < count; i++) {
        cout << "Enter a value: ";
        cin >> array1[i];

        if (array1[i] > max_value) {  // Update max_value and max_index if a larger value is found
            max_value = array1[i];
            max_index = i;
        }
    }

    cout << "The largest value is: " << max_value << endl;
    cout << "The index of the largest value is: " << max_index << endl;

    return 0;
}

