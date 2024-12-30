#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    const short MaxValue = 11;
    const short MinValue = 1;
    const short ExcludedValue = 6;

    srand(time(nullptr));
    short num1;

    do {
        num1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
    } while (num1 == ExcludedValue);

    if (num1 > 6)
        cout << "Heads";

    else if (num1 < 6)
        cout << "Tails";

    return 0;
}
