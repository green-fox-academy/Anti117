#include "apple.h"
#include <vector>

std::string getApple(){
    return "apple";
}
int sum(std::vector<int> elements) {
    int sm = 0;
    for (int i : elements) {
        sm += i;
    }
    return sm;
}