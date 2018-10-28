#include <iostream>

int main() {
    int i =1;
    while (i <= 500){
        if (i % 2 == 0){
            std::cout << i << " " << std::endl;
        }
        i ++;
    }
    return 0;
}