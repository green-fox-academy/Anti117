#include <iostream>

using namespace std;

int main() {
    int p1[3] = {1, 2, 3};
    int p2[2] = {4, 5};

    if (sizeof(p2) < sizeof(p1)) {
        cout << "p1 has more!" << endl;
    }else if (sizeof(p2) > sizeof(p1)){
        cout << "p2 has more!" << endl;
    }
    return 0;
}