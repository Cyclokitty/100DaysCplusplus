#include <iostream>

int return5()
{
    return 5;
}

int main()
{
    std::cout << return5() << std::endl;
    std::cout << return5() + 2 << std::endl;

    return5();

    return 0;
}
