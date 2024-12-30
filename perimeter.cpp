/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int h,w,perimeter,area;
    cout<<"Width : ";
    cin >> w;
    cout<<"Height : ";
    cin >> h;
    area = w*h;
    perimeter = 2*(w+h);
    cout<< "Perimeter of Rectangle : " << perimeter << endl;
    cout<< "Area of Rectangle : " << area << endl;
    

    return 0;
}
