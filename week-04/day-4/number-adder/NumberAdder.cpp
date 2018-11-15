#include<iostream>

int NumberAdder(int num);

int main()
{
    int num;
    std::cout << "Type in a positive integer: " << std::endl;
    std::cin >> num;

    std::cout << "Sum =  " << NumberAdder(num) << std::endl;

    return 0;
}

int NumberAdder(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return (num + NumberAdder(num - 1));
    }
}