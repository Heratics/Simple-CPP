#include <iostream>

using namespace std;

const double MinGrade = 50;

bool score (double grade){
    return grade >= MinGrade;
}

int main() {
    double grade;

    cin  >> grade;

    (grade >= MinGrade) ? cout << "pass!" : cout << "fail :(";

    return 0;
}
