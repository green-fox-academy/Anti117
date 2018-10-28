#include <iostream>

int main() {

    int number;
    std::cout << " Choose a number!: " << std::endl;
    std::cin >> number;

    if ( number <= 0){
        std::cout << "It's not enought!" << std::endl;
    }else if (number == 1){
        std::cout << "The chosen number is ONE!" << std::endl;
    }else if (number == 2){
        std::cout << "The chosen number is TWO!" << std::endl;
    }else if(number >= 2){
        std::cout << "It's a lot!" << std::endl;
    }
    return 0;
}