#include <iostream>

int BunnyEars(int bunny);

int main() {
    int bunny;
    std::cout << "Type in the number of Bunnies: " << std::endl;
    std::cin >> bunny;
    std::cout << "The bunnies have in total" << " " << BunnyEars(bunny)  << " ears!" << std::endl;
    return 0;
}

int BunnyEars(int bunny){
    if(bunny == 0)
        return 0;
    return 2+BunnyEars(bunny-1);
}