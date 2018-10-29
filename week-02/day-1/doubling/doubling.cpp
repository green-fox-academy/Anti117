#include <iostream>

// - Create an integer variable named `baseNum` and assign the value `123` to it
// - Create a function called `doubling` that doubles it's input parameter and returns with an integer
// - Print the result of `doubling(baseNum)`

void doubling (int& a);

int main() {
    int basenum=123;
    doubling (basenum);
    std::cout <<"x=" << basenum << std::endl;
    return 0;
}

void doubling (int& a){
    a*=2;
}