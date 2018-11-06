#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *pa = &a;
    int *pb = &b;
    int sum =*pa+*pb;

    std::cout << sum << std::endl;

    return 0;
}