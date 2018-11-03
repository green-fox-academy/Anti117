#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    string abc []={"first","second","third"};
    string swap = abc[0];

    abc[0] = abc[2];
    abc[2] = swap;

    cout << abc[0] << abc[2] << endl;
    return 0;
}