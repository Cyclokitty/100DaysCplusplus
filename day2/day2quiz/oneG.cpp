#include <iostream>
int return 5()
{
    return 5;
}

int main()
{
    std::cout << return 5() << std::endl;

    return 0;
}

// this does not compile because the function layout is incorrect. should be return5(). spaces in function names are illegal.

// answer: This program will not compile because the function has an invalid name.
