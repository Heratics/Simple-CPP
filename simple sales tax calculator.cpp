#include <iostream>

using namespace std;

int main()
{
    double sales, state_tax, county_tax, final_number;

    cout << "Welcome to the simple tax calculator." << endl;

    cout << "Enter your sales amount: ";
    cin >> sales;

    cout << "Enter the state tax rate (in decimal form, e.g., 0.04 for 4%): ";
    cin >> state_tax;

    cout << "Enter the county tax rate (in decimal form, e.g., 0.02 for 2%): ";
    cin >> county_tax;

    final_number = sales - (sales * county_tax) - (sales * state_tax);

    cout << "After applying state and county taxes, your final sales amount is: " << final_number << endl;

    return 0;
}
