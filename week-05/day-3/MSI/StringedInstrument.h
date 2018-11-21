#ifndef MSI_STRINGEDINSTRUMENT_H
#define MSI_STRINGEDINSTRUMENT_H

#include <iostream>
#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    virtual std::string sound() = 0;
protected:
    int _numberOfStrings;
};

#endif //MSI_STRINGEDINSTRUMENT_H
