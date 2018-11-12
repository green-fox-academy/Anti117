#include <iostream>
#include <fstream>
#include <string>


bool CF (std::string previousfile, std::string nextfile);

int main() {

    std::string previous ="C:/Users/Anti/jatszoter/Anti117/week-04/day-1/copyfile";
    std::string copy;

    std::cout << "Give your new file a name: " << std::endl;
    std::cin >> copy;

    std::cout << CF (previous, copy) << std::endl;
    return 0;
}

bool CF (std::string previousfile, std::string nextfile){

    std::ifstream oldfile(previousfile);
    std::ofstream newfile(nextfile);
    std::string lines;

    if (oldfile.is_open() && newfile.is_open()){
        while (getline(oldfile, lines)){
            newfile << lines << std::endl;
        }
    }

    oldfile.close();
    newfile.close();

    return true;
}