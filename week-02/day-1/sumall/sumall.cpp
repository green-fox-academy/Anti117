#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

    int ai [] = {3,4,5,6,7};
    int sum = 0;
    for (int a = 0; a < 5; ++a){
        sum += ai[a];
    }
cout << sum << endl;
    return 0;
}