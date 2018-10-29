#include <iostream>

// - Create a function called `factorio`
//   that returns it's input's factorial

int factorio(int a);

int main() {
    int num;
    std::cout << "Please write a number: !" << std::endl;
    std::cin >> num;
    std::cout << factorio(num) << std::endl;
    return 0;
}

int factorio (int a){
    int b =1;
    for (int c=1; c <= a; c++){
        b=b*c;
    }
        return b;
}