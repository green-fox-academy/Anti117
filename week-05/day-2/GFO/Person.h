#ifndef GFO_PERSON_H
#define GFO_PERSON_H

#include <iostream>
#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender);
    Person();
    std::string getGender();
    virtual void getIntroduce();
    virtual void getGoal();
protected:
    std::string _name;
    int _age;
    Gender _gender;
};

#endif //GFO_PERSON_H
