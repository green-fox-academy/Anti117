//
// Created by Anti on 2018. 11. 21..
//

#ifndef ZOO_REPTILES_H
#define ZOO_REPTILES_H

#include <string>
#include "Animal.h"

class Reptiles : public Animal{
public:
    Reptiles();
    Reptiles (std::string Name);
    std::string breed() override;
protected:

};

#endif //ZOO_REPTILES_H
