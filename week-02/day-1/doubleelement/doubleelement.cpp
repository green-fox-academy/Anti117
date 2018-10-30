#include <iostream>

int main() {

    int numlist[5]= {3,4,5,6,7};
    double(sizeof(numlist)/sizeof(numlist[0]));
    for (int a = 0; a< (sizeof(numlist)/sizeof(numlist[0])); a++){
        numlist[a] *=2;{
            std::cout << numlist[a] << std::endl;
        }
}

    return 0;
}