#ifndef MSI_VIOLIN_H
#define MSI_VIOLIN_H


#include <iostream>
#include "StringedInstrument.h"
#include "Instrument.h"

class Violin : public StringedInstrument {
public:
    Violin();
    Violin(int numberOfString);

    void play() override;
    std::string sound() override;
};

#endif //MSI_VIOLIN_H
