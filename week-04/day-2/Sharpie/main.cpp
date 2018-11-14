#include <iostream>
#include <string>
#include "Sharpie.h"

int main() {

    Sharpie Sharpie("Blue", 2);
    std::cout << Sharpie.getInkAmount() << std::endl;
    Sharpie.Use();
    std::cout << Sharpie.getInkAmount() << std::endl;
    return 0;
}