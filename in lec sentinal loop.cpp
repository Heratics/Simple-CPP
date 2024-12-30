/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int grade, sum = 0;
    int sentinel = -1;
    int counter = 0;

    cout << "enter a subject grade :";
    cin >> grade;

    while(grade != sentinel)
    {
        //cin >> grade;                     // when input here it creates error
        sum = sum + grade;

        cout << "enter a subject grade :";
        cin >> grade;                      //this being here allows the code to run normally

        counter++;
    }

    cout << "your total sum is :" << sum << endl;
    cout << "and your number of subjects is :" << counter << endl;
    cout <<"your average is :" << sum / counter;
    
    return 0;
}
