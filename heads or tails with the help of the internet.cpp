/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <random>

using namespace std;

int main() {
    
    random_device rd;
    mt19937 gen(rd());   // Mersenne Twister PRNG
    uniform_int_distribution<> distribution(0, 1);   // Randomly generates 0 or 1

    int randomValue = distribution(gen);   // Generates a random value of 0 or 1

    cout << "Heads or Tails : ";

    if (randomValue == 1)
    
    {
        cout << "Heads" << endl;
    }

    else if (randomValue == 0)
    {
        cout << "Tails" << endl;
    }


    return 0;
}
