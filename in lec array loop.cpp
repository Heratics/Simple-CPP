#include <iostream>

using namespace std;

int main()
{
    int count;

    cout << "enter the number of elements you need to input :";
    cin  >> count;

    char array1[count];

    for(int j = 0; j < count; j++){
        cout << "enter your input :";
        cin >> array1[j];
    }

    for(int i = 0; i < count; i++){
        cout << array1[i] << " ";
    }

    return 0;
}
