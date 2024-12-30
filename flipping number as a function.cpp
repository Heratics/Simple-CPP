#include <iostream>

using namespace std;

int flipDigits(int inputNumber) {
    int tensDigit, onesDigit, flippedNumber;

    if (inputNumber < 10 || inputNumber > 99) {
        cout << "Error! Please input a 2-digit number." << endl;
        return -1; // -1 means there is an error
    }

    tensDigit = inputNumber / 10;
    onesDigit = inputNumber % 10;
    flippedNumber = (onesDigit * 10) + tensDigit;

    return flippedNumber;
}

int main() {
    int inputNumber;

    cout << "Enter a 2-digit number: ";
    cin >> inputNumber;

    int finalFlip = flipDigits(inputNumber);

    if (finalFlip != -1) {
        cout << "The flipped number is: " << finalFlip << endl;
    }

    return 0;
}
