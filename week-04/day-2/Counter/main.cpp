#include <iostream>
#include "counter.h"

void checkValue(const std::string& name, int expected, int actual);

int main(int argc, char* args[])
{
    Counter c;
    checkValue("Get Zero0", 0, c.get());

    c.add(5);
    checkValue("Add More", 5, c.get());

    c.add();
    checkValue("Add One", 6, c.get());

    c.reset();
    checkValue("Get Zero1", 0, c.get());

    Counter c2(7);
    checkValue("Get Init", 7, c2.get());

    c2.reset();
    checkValue("Reset", 7, c2.get());

    return 0;
}

void checkValue(const std::string& name, int expected, int actual) {
    if(expected != actual) {
        std::cout << name << "Failed! Expected: " << expected << " Actual: " << actual << std::endl;
    }
    else {
        std::cout << name << " " << "Passed!" << " " << std::endl;
    }
}