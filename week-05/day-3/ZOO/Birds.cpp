#include "Birds.h"

Birds::Birds(std::string Name){
    _Name = Name;
};

std::string Birds::breed(){
    return "Laying Eggs";
}