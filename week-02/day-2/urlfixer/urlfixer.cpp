#include <iostream>

int main() {
    std::string s("https\://www.reddit.com/r/nevertellmethebots");

    while (s.find("bots") != std::string::npos)
        s.replace(s.find("bots"), 4, "odds");
    std::cout << s << std::endl;

    return 0;
}
