#include <iostream>

int main() {

    std::cout << " Give me a number to work with!: " << std::endl;
    int number;
    std::cin >> number;

    for (int i = 1; i <= 10; ++i){
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }
    return 0;
}