#include <iostream>

using namespace std;

int main() {
    int arrayValues, foundValue, arraySize = 0;
    int i, j; // loop integers
    bool flag;
    int value = 1;

    cout << "welcome to the array value finder :) " << endl << endl;
    cout << "*note the maximum number of values you can enter is 100*" << endl << endl;
    cout << "when you are finished entering the array values, enter \"0\" to exit." << endl << endl;

    int array1[100];

    for (j = 0; j < 101; j++) {
        cout << "enter value #" << value++ << " :";
        cin >> arrayValues;

        if (arrayValues == 0) {
            break;
        }

        array1[arraySize++] = arrayValues;
    }

    cout << "enter the value you want to check :";
    cin >> foundValue;

    for (i = 0; i < arraySize; i++) {
        if (array1[i] == foundValue) {
            cout << "the value is in index " << i << endl;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "Error: your value is not in the array set!" << endl;
    }

    return 0;
}


