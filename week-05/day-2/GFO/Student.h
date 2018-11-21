#ifndef GFO_STUDENT_H
#define GFO_STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"

class Student : public Person {
public:
    Student (std::string name, int age, Gender gender, std::string previousOrganization);
    Student();
    void getGoal() override;
    void getIntroduce() override;
    void skippedDays(int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;
};
#endif //GFO_STUDENT_H