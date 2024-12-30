#include <iostream>

int main()
{
    //this is called short circuit evaluation where the first sentenct is true
    //the compiler doesnt bother to read the other after && or || and just takes it as is
    
    int x = 5;
    if (100 > 10 && ++x > 0)
        std::cout << 10;
        
    std::cout << x;
    
    return 0;
}
