#include <iostream>
#include "Birds.h"
#include "Reptiles.h"
#include "Mammals.h"

int main( int argc, char* args[] )
{
    Reptiles reptile("Crocodile");
    Mammals mammal("Koala");
    Birds bird("Parrot");

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;
}