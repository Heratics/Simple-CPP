#include <iostream>

using namespace std;

int main()
{
    double sales, state_tax, county_tax, final_number;

    cout << "Welcome to the simple tax calculator. Please follow the steps below :)" << endl;

    cout << "Enter your sales : $";
    cin >> sales;

    cout << "Enter your state tax in the form of \"x.x\" : ";
    cin >> state_tax;

    cout << "Enter your county tax in the form of \"x.x\" : ";
    cin >> county_tax;

    state_tax /= 100;
    county_tax /= 100;

    final_number = sales - (sales * county_tax) - (sales * state_tax);

    cout << "Your Profits after taxes : $" << final_number << endl;
    
    cout << "Your State Taxes : $" << sales * state_tax << endl;
    
    cout << "Your County Taxes : $" << sales * county_tax;

    return 0;
}

