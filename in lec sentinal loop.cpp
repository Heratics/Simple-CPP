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
