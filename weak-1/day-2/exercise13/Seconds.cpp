#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int day = 60 * 60 * 24;
    int remaining = day - (currentHours + currentMinutes + currentSeconds);
    currentHours *= (60 * 60);
    currentMinutes *= 60;
    std::cout << remaining << std::endl;

    return 0;
}