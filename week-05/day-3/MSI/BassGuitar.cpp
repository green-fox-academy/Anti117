#include "BassGuitar.h"
#include <iostream>
#include "StringedInstrument.h"

BassGuitar::BassGuitar(int numberOfStrings){
    _name = "BassGuitar";
    _numberOfStrings = numberOfStrings;
}

BassGuitar::BassGuitar(){
    _name = "BassGuitar";
    _numberOfStrings = 4;
}

std::string BassGuitar::sound(){
    return "Duum-duum-duum";
}

void BassGuitar::play(){
    std::cout << _name << " is a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}