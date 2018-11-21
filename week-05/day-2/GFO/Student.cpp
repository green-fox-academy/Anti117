#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::getIntroduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " years old " << getGender() << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::skippedDays(int numberOfDays) {

    _skippedDays = _skippedDays + numberOfDays;
}