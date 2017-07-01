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
    return7();
    return9();

    return 0;
}

// this will compile and output 79

// answer:  program compiles but does not produce any output. The return values from the functions are not used by main, and are thus discarded. 
