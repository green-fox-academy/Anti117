#include <iostream>

int main() {

    int numbera;
    int numberb;
    std::cout << "Please type in the number of girls!: " << std::endl;
    std::cin >> numbera;
    std::cout << "Please type in the number of boys!: " << std::endl;
    std::cin >> numberb;

    if ((numbera == numberb) && ((numbera + numberb) >= 20)){
        std::cout << "The party is excellent!" << std::endl;
    }else if ((numbera % numberb != 0) && ((numbera + numberb) >= 20)){
        std::cout << "Quite cool party!" << std::endl;
    }else if ((numbera + numberb) < 20){
        std::cout << "Average party ...!" << std::endl;
    }else (numbera == 0);
        std::cout << "Sausage party!" << std::endl;
    return 0;
}
