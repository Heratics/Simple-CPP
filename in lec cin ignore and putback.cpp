#include <iostream>

using namespace std;

int main()
{
    char x, y;
    int z;
    cin  >> x;
    cin.ignore(2,'3');
    cin.putback('5');
    cin  >> z;
    cout << x << z;

    return 0;
}
