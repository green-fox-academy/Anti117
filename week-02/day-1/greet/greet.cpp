#include <iostream>
using std::string;
using namespace std;

// - Create a string variable named `al` and assign the value `Greenfox` to it
// - Create a function called `greet` that greets it's input parameter
// - Greeting is printing e.g. `Greetings dear, Greenfox`
// - Greet `al`

void greet();

int main(){
    string a1="greenfox";
    greet();
    return 0;
}

void greet(){
    string a1 ="greenfox";
    cout << "Greetings dear, " << a1 << "!" << endl;
}
