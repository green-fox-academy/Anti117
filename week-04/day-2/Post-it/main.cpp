#include <iostream>
#include <string>
#include <vector>
#include "PostIt.h"



int main() {
   PostIt PostIt0("Orange", "Idea1", "Blue");
   std::cout << PostIt0.getBackgroundColor() << std::endl;
   PostIt PostIt1("Pink", "Awesom","Black");
   std::cout << PostIt1.getText() << std::endl;
   PostIt PostIt2("Yellow", "Siperb!", "Green");
   std::cout << PostIt2.getTextColor() << std::endl;
   
    return 0;
}