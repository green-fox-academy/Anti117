
#include <iostream>
#include "Counter.h"

Counter::Counter () {
    _number = 0;
    _InitialValue = 0;
}

Counter::Counter(int number) {
    _number = number;
    _InitialValue = number;
}

void Counter::add(int number) {
    _number+= number;
}

int Counter::get() {
    return _number;
}

void Counter::add() {
    _number++;
}

void Counter::reset() {
    _number = _InitialValue;
}
