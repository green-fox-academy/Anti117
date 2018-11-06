#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    int *ip;
    ip= &a;
    std::cout<<"Value of the variable "<<"! "<< a <<"Address stored in ip variable: !"<< ip <<"! "<< std::endl;

    double b = 432.2;
    double *dp;
    dp= &b;
    std::cout<<"Value of the variable "<< b <<"! "<<"Address stored in ip variable: !"<< dp <<"! "<< std::endl;

    std::string name = "Bob";
    std::string *np;
    np= &name;
    std::cout<<"Value of the variable "<< name <<"! "<<"Address stored in ip variable: !"<< np <<"! "<< std::endl;

    return 0;
}