/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int math, english, arabic, science, civics, average, sum, grade;
    
    cout << "Math : ";
    cin >> math;
    
    cout << "English : ";
    cin >> english;
    
    cout << "Arabic : ";
    cin >> arabic;
    
    cout << "Science : ";
    cin >> science;
    
    cout << "Civics : ";
    cin >> civics;
    
    sum = math + english + arabic + science + civics;
    
    average = sum / 5;
    
    cout << "The Grade Average is : " << average << endl;
    
    cout << "The Average you got means you get a graded letter of : ";

    if (average > 97) 
{
    cout << "grade = A+";
}
    else if (average > 93) 
{
    cout << "grade = A";
}
    else if (average > 90) 
{
    cout << "grade = B+";
}
    else if (average > 85) 
{
    cout << "grade = B";
}
    else if (average > 80) 
{
    cout << "grade = C+";
}
    else if (average > 78) 
{
    cout << "grade = C";
}
    else 
{
    cout << "grade = F";
}


    return 0;
}


