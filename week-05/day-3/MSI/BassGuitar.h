//
// Created by Anti on 2018. 11. 21..
//

#ifndef MSI_BASSGUITAR_H
#define MSI_BASSGUITAR_H


#include <iostream>
#include "StringedInstrument.h"
#include "Instrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();
    BassGuitar(int numberOfString);

    void play() override;
    std::string sound() override;
};

#endif //MSI_BASSGUITAR_H


