/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    int guess;
    short ans;
    short counter = 0;

    cout << "guess a number between 1-10" << endl;

    srand(time(0));

    ans = (rand() % (10 - 1 +1)) + 1;

    while (true){
        cout << "Enter your guess! : ";
        cin >> guess;
        counter++;

        if(guess == ans){
            cout << "You guessed correctly!" << endl << "It took you " << counter << " tries";
            break;
        }

        cout << "Try again!" << endl;
    }

    return 0;
}
