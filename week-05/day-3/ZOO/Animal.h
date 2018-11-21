#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>

class Animal {
public:
    std::string getName();
    virtual std::string breed()=0;
protected:
    std::string _Name;
    int _age;
};

#endif //ZOO_ANIMAL_H
