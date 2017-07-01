#include <iostream>
void printA()
{
    std::cout << "A" << std::endl;
}

int main()
{
    std::cout << printA() << std::endl;

    return 0;
}


// it'll print out A and a blank lines

// answer: This program does not compile. Function printA() returns void, which main tries to send to std::cout. This will produce a compile error.
