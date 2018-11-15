#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int Power(int, int);

int main()
{
    int base, powerSquared, Squared;

    std::cout << "Type in a base number(positive): " << std::endl;
    std::cin >> base;

    std::cout << "Type in a number to square with(positive): " << std::endl;
    std::cin >> powerSquared;

    Squared = Power(base, powerSquared);
    std::cout << base << "^" << powerSquared << " = " << Squared << std::endl;

    return 0;
}

int Power(int base, int powerSquared)
{
    if (powerSquared != 0)
        return (base*Power(base, powerSquared-1));
    else
        return 1;
}