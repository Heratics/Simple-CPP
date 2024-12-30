/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
  string answer;
  string guess;
  int tries = 0;

  cout << "Welcome to Hangman!" << endl;

  do {
    cout << "Enter a 3-letter word to be guessed: ";
    cin >> answer;
  } while (answer.length() != 3);

  while (guess != answer && tries < 6) {
    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == answer) {
      cout << "Congratulations! You guessed the correct word: " << answer << endl;
      break;
    }

    tries++;
    cout << "You have " << 6 - tries << " guesses left." << endl;
  }

  if (guess != answer) {
    cout << "Sorry, you failed to guess the word in time. The correct word is: " << answer << endl;
  }

  return 0;
}
