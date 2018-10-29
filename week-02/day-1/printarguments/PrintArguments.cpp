#include <iostream>
#include <string>

void printParams (std::string x){
    std::cout << x << std::endl;
}
void printParams (std::string x, std::string y){
    std::cout << x <<", "<< x << std::endl;
}
void printParams (std::string x, std::string y, std::string z){
    std::cout << x <<", "<< y <<", "<< z << std::endl;
}
void printParams (std::string x, std::string y, std::string z, std::string c){
    std::cout << x <<", "<< y <<", "<< z <<", "<< c << std::endl;
}

int main(int argc, char* args[]) {
    printParams("First");
    printParams("First", "Second");
    printParams("First", "Second", "Third");
    printParams("First", "Second", "Third", "Fourth");
    return 0;
}
