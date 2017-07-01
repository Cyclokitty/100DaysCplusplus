#include <iostream>
int return5()
{
    return 5;
}

int main()
{
    std::cout << return5 << std::endl;

    return 0;
}

// this won't compile because functions are called with () attached to the name:
return5()

// answer: This program will compile, but the function will not be called because the function call is missing parenthesis. What actually gets output depends on the compiler.
