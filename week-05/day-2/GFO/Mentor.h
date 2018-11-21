#ifndef GFO_MENTOR_H
#define GFO_MENTOR_H

#include "Person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR,
};

class Mentor : public Person {
public:
    Mentor(std::string name, int age, Gender gender, Level level);
    Mentor();

    std::string getLevel();
    void getGoal() override;
    void getIntroduce() override;
protected:
    Level _level;
};

#endif //GFO_MENTOR_H
