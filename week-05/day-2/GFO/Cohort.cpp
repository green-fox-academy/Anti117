#include "Cohort.h"

Cohort::Cohort(std::string name) {
    _name = name;
    _students.clear();
    _mentors.clear();
}

void Cohort::addStudent(Student* student) {
    _students.push_back(student);
}

void Cohort::addMentor(Mentor* mentor) {
    _mentors.push_back(mentor);
}

void Cohort::info() {
    std::cout << "The " << _name << " Cohort has " << _students.size() << "Students and "
              << _mentors.size() << " Mentors." << std::endl;
}