#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int a; // allocates a variable to hold the user input
    std::cin >> a; // assigns value to a
    return a;
}

int main()
{
    int x = getValueFromUser();
    int y = getValueFromUser();

    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}
