#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<string> filter(const vector<std::string> &list, const vector<string> &sweets) {
    int count = 0;
    vector<string> tempList(list);
    vector<string> tempSweets(sweets);
    for (int a = 0; a < tempList.size(); ++a)
    {
        if ((find(tempSweets.begin(), tempSweets.end(), tempList[a])) != tempSweets.end()) {
        } else {
            tempList.erase(tempList.begin() +a);
        }
        --a;
    }
    return tempList;
}

int main() {

    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the list as a parameter.

    // Expected output: Cupcake Brownie
    for (const auto &sweet : filter(list, sweets)) {
        std::cout << sweet << " ";
    }
    return 0;
}