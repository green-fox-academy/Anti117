#include <iostream>

int n = 1, sum = 0;

int sumDigits(int n, int sum)
{
    if (n== 0)
    {
        return sum;
    }
    else
    {
        sum = sum + n%10;
        n= n/10;
        return sumDigits(n, sum);
    }
}

int main(int argc, char* argv[])
{
    n = 1, sum = 0;

    std::cout << "Enter a non-negative integer (enter 0 to end): "<< std::endl;
    std::cin >> n;
    sum = sumDigits (n, sum);
    std::cout << "The sum of all digits "<< n << " is: " << sum << std::endl;
    
    return 0;
}
