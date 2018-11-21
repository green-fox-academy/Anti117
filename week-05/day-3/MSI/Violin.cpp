#include "Violin.h"
#include <iostream>
#include "StringedInstrument.h"

Violin::Violin(int numberOfStrings){
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}

Violin::Violin(){
    _name = "Violin";
    _numberOfStrings = 4;
}

std::string Violin::sound(){
    return "Screech";
}

void Violin::play(){
    std::cout << _name << " is a " << _numberOfStrings <<"-stringed instrument that goes " << sound() << std::endl;
}