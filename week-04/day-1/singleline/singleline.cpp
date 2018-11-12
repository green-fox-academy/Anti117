#include <iostream>
#include <fstream>

int main() {
    std::ofstream pFile;
    pFile.open("my-file.txt");

    pFile << "Antal Kovacs!" << std::endl;
    pFile.close();
    return 0;
}