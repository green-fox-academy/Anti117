#include <iostream>

int main() {
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Your name is " << name << std::endl;

    int age;
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;
    std::cout << "You are:" << age << std::endl;

    double height;
    std::cout << "How tall you are? " << std::endl;
    std::cin >> height;
    std::cout << "You are " << height << " m tall" << std::endl;

  int married = 1;

  if (married = 1){
      std::cout << "Are you married? Type 1 if yes 0 if no.anti" << std::endl;
      std::cin >> married;
      std::cout << "Yaay!" << std::endl;
  }else {
      std::cout << "Don't worry!" << std::endl;
  }
    return 0;
}