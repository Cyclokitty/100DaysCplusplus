#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
    std::cout << "Do do do, da da da. This is what I say to you!" << std::endl;
}

int main()
{
    std::cout << "Staring main()" << std::endl;
    doPrint(); // interrupt main() by making a function call to doPrint(). main() is the caller
    std::cout << "Ending main()" << std::endl;

    return 0;
}
