#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int accept[5];
    for (int a = 0; a < 6; a++){
        std::cout <<"Give me five numbers: "<< std::endl;
        std::cin >> accept[a];
        std::cout << " The memory address of the number: "<< &accept[a] << std::endl;
    }
    return 0;
}