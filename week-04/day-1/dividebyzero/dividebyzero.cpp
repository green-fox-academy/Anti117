#include <iostream>

int main() {

    try{
        int num1;
        int i = 10;
        std::cout << "Enter a number that will be divided eith 10: " << std::endl;
        std::cin >> num1;

        if(num1 == 0){
            throw 0;
        }
        std::cout << num1/i << std::endl;
    }catch(int x){
        std::cout <<"Fail! (The math gods not allows you to divide by: " << x << "!" << std::endl;

    }
    return 0;
}