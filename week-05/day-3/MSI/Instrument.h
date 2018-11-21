#ifndef MSI_INSTRUMENT_H
#define MSI_INSTRUMENT_H

#include <iostream>
#include <string>

class Instrument {
public:
    virtual void play() = 0;
protected:
    std::string _name;
};

#endif //MSI_INSTRUMENT_H
