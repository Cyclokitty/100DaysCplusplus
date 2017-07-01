#include <iostream>
int return7()
{
    return 7;

    int return9()
    {
        return 9;
    }
}

int main()
{
    std::cout << return7() + return9() << std::endl;

    return 0;
}

// this will not compile becasue return7() has a nested function in it

// answer:  program will not compile. Nested functions are not allowed.
