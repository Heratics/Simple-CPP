#include <iostream>

using namespace std;

void test(int num, int parameter)
{

  for (int i = 1; i <= parameter; i++){
    if (i % num == 0)
      cout << i << " ";
  }
}

int main()
{
  int num, parameter;

  cout << "enter the parameters you desire :";
  cin  >> parameter;

  cout << "enter your desired modulo :";
  cin  >> num;

  test(num, parameter);

  return 0;
}
