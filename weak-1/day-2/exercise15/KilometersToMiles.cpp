#include <iostream>

int main() {

    float kmph, miph;
    miph = (kmph * 0.6213712);

    std::cout << " Input the distance in kilometer : ";
    std::cin >> kmph;
    std::cout << kmph <<" Km is "<< miph << " Miles!" << std::endl;
    return 0;
}