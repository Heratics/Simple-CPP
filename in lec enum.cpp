#include <iostream>

using namespace std;

int main()
{
    enum colours {red, green, blue, black};

    colours one , two, three;

    one = green;
    two = black;
    two = blue;
    three = one + one; // error due to this line of code changing the data type for the varibale

    switch (one){
        case 0:
            cout << "red";
            break;
        case 1:
            cout << "green";
            break;
        case 2:
            cout << "blue";
            break;
        case 3:
            cout << "black";
            break;
    }

  return 0;
}
