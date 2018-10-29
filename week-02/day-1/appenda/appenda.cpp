#include <iostream>

// - Create a string variable named `typo` and assign the value `Chinchill` to it
// - Write a function called `appendAFunc` that gets a string as an input,
//   appends an 'a' character to its end and returns with a string
//
// - Print the result of `appendAFunc(typo)`

void appendAFunc ();

int main() {
    std::string typo ="Chinchill";
    appendAFunc();
    return 0;
}

void appendAFunc (){
    std::string typo = "Chinchill";
    std::cout << typo << "a" << std::endl;
}