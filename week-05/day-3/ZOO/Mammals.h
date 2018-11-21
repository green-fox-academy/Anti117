#ifndef ZOO_MAMMALS_H
#define ZOO_MAMMALS_H
#include "Animal.h"


class Mammals : public Animal{
public:
    Mammals();
    Mammals (std::string Name);
    std::string breed() override;
protected:
};

#endif //ZOO_MAMMALS_H
