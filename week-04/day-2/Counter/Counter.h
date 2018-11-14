//
// Created by Anti on 2018. 11. 14..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter();

    int get();
    void add();
    void reset();
    void add (int number);
    Counter (int number);
private:
    int _number;
    int _InitialValue;
};

#endif //COUNTER_COUNTER_H
