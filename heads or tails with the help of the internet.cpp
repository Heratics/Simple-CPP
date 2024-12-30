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
