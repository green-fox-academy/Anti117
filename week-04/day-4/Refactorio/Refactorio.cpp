#include <iostream>

int Refactorio(int);

int main() {

    int num;
    std::cout <<"Type in an integer: ";
    std::cin >> num;
    std::cout << Refactorio(num) << std::endl;

    return 0;
}

int Refactorio(int count){
    if (count <= 1){
        return 1;
    }
    else{
        return (count * Refactorio(count -1));
    }
}