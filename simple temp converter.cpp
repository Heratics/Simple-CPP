#include <iostream>

using namespace std;

int main(){
    double temp;
    char unit;

    cout << "***** Temperature conversion *****" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celsius" << endl;

    cout << "What unit would you like to convert to :";
    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius :";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "The temperature in " << unit << " is " << temp << endl;
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit :";
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "The temperature in " << unit << " is " << temp << endl;
    }

    return 0;
}
