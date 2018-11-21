#ifndef ZOO_BIRDS_H
#define ZOO_BIRDS_H
#include <string>
#include "Animal.h"

 class Birds : public Animal{
public:
    Birds();
    Birds (std::string Name);
    std::string breed() override;
protected:

};

#endif //ZOO_BIRDS_H
