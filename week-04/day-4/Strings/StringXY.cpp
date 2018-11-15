#include <iostream>
#include <string>

std::string XtoY (std::string XtoY, int i);

int main() {
    std::string text;
    std::cout << "Type your text: " << std::endl;
    std::cin >> text;
    std::cout << "After changing X to Y: " << XtoY(text, 0) << std::endl;

    return 0;
}

std::string XtoY (std::string text, int i) {

    if (i > sizeof(text) / sizeof(text[0])) {
        return text;
    } else if (text[i] == 'x') {
        text[i] = 'y';
        return XtoY(text, i+1);
    } else {
        return XtoY(text, i+1);
    }
}