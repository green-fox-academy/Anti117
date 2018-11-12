#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    std::ofstream pFile;
    pFile.open("myFile2.txt");

    pFile <<"This text will be printed out aswell!" << std::endl;
    pFile.close();

    ifstream file("myFile2.txt");
    string content;

    while(file >> content) {
        cout << content << ' ';
    }
    return 0;
}