#include <iostream>
#include <vector>
using namespace std;

        vector<string> appendA(const vector<string>& animals){
    vector<string> temp = animals;
    for (int i = 0; i < animals.size(); ++i) {
        temp[i] += "a";
        cout << temp[i] << " " << endl;
    }
}

int main() {
    vector<string> animals = {"bo", "anacond", "koal", "pand", "zebr"};
    for (const auto &animal : appendA(animals)) {
        cout << animal << " " << endl;
    }
    return 0;
}