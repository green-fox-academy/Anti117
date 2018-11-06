#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *pt= &temperature;
    *pt=28.5;
    std::cout << *pt << std::endl;

    return 0;
}