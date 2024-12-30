#include <iostream>

using namespace std;

int main(){
    int inputNumber;
    int tensDigit, onesDigit, flippedNumber;

    cout << "Enter a 2-digit number: ";
    cin >> inputNumber;

    if (inputNumber < 10 || inputNumber > 99) {
        cout << "Error! Please input a 2 digit number." << endl;
    } else {
        tensDigit = inputNumber / 10;
        onesDigit = inputNumber % 10;
        flippedNumber = (onesDigit * 10) + tensDigit;
        cout << "The flipped number is: " << flippedNumber << endl;
    }

    return 0;
}
