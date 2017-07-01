#include <iostream>
int return7()
{
    return 7;
}

int return9()
{
    return 9;
}

int main()
{
    std::cout << return7() + return9() << std::endl;

    return 0;
}

// This will complile and the output will be 16

// answer: This program prints the number 16.
