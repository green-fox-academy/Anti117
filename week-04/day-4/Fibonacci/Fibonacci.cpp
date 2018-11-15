#include<iostream>

int fib(int n);

int main(){
    int n;
    std::cout << "Type in a positive integer: " << std::endl;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    getchar();
    return 0;
}

int fib(int n){
    if (n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}