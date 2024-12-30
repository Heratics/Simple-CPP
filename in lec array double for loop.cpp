#include <iostream>

using namespace std;

int main()
{
    int x[3];

    for(int j = 0; j < 3; j++){
        cout << "enter a value for x :";
        cin >> x[j];
    }

    for(int i = 0; i < 3; i++){
        cout << x[i] << " ";
    }

    return 0;
}
