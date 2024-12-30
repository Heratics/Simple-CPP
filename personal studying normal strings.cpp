#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "What is your age?: ";
    std::cin  >> age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.";


    return 0;
}
