#include <iostream>
int getNumbers()
{
    return 5;
    return 7;
}

int main()
{
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;

    return 0;
}

// prints out 5, 7

// answer: This program prints 5 twice (on separate lines). Both times when function getNumbers() is called, the value 5 is returned. When the return 5 statement is executed, the function is exited immediately, so the return 7 statement never executes.

// like in js, once return is executed no other values are reachable
