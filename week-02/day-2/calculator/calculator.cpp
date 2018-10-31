#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    char calculate;
    cout<<"Enter any number: " << endl;
    cin >> x;
    cout<<"Select an operation (+ - * / and %): "<< endl;
    cin>> calculate;
    cout<<"Enter an other number: " <<endl;
    cin >> y;
    if (calculate == '+'){
        z=x+y;
        cout<< "Your number: " << z << endl;
    }
    if (calculate == '-'){
        z=x-y;
        cout<< "Your number: " << z << endl;
    }
    else if (calculate == '*'){
        z=x*y;
        cout<< "Your number: " << z << endl;
    }
    else if (calculate == '/'){
        z= x/y;
        cout<< "Your number: " << z << endl;
    }
    else if (calculate == '%'){
        z=x%y;
        cout<< "Your number: " << z << endl;
    }
    return 0;
}