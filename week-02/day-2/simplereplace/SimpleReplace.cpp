#include <iostream>

int main() {
    std::string s=("In a dishwasher far far away");

    while (s.find("dishwasher") != std::string::npos)
        s.replace(s.find("dishwasher"), 10, "galaxy");
    std::cout << s << std::endl;

    return 0;
}