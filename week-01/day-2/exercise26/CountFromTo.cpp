#include <iostream>

int main() {

    int number1;
    std::cout << " Please give me a number to work with (1/2)!: " << std::endl;
    std::cin >> number1;

    int number2;
    std::cout << " Please give me a number to work with (2/2)!: " << std::endl;
    std::cin >> number2;

    int i;
    if (number1 > number2){
        std::cout << "The second number should be bigger!" << std::endl;
    }else (number1 < number2);{
        for (i = number1 + 1; i < number2; i ++){
            std::cout << i << std::endl;
        }
    }

    return 0;
}