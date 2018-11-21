#ifndef MSI_ELECTRICGUITAR_H
#define MSI_ELECTRICGUITAR_H

#include <iostream>
#include "StringedInstrument.h"
#include "Instrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    ElectricGuitar(int numberOfString);

    void play() override;
    std::string sound() override;
};

#endif //MSI_ELECTRICGUITAR_H
