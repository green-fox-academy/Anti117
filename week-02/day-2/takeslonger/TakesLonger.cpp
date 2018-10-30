#include <iostream>
using namespace std;

int main() {
    string qu("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    string adding = "It always takes longer than you";

    qu.replace(18, 6, adding);
    cout << qu << endl;

    return 0;
}