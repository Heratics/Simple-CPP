#include <iostream>

using namespace std;

int main()
{
    double sales, state_tax, county_tax, final_number;
    cout << "enter your sales : " << endl;
    cin  >> sales;
    state_tax = (4.0 / 100);
    county_tax = (2.0 / 100);
    final_number = sales - (sales * county_tax) - (sales * state_tax);
    cout << "this is your sales numbers after applying the taxes provided by the state and county : " << final_number;

    return 0;
}
