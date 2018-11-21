#ifndef GFO_SPONSOR_H
#define GFO_SPONSOR_H

#include <iostream>
#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);
    Sponsor();
    void getIntroduce() override;
    void hire();
    void getGoal() override;
protected:
    std::string _company;
    int _hiredStudents;
};

#endif //GFO_SPONSOR_H
