#include <iostream>

int main() {
     int i, k, n;

     std::cout << " Please enter number of rows you want to see: " << std::endl;
     std::cin >> n;
     for (k =1; k <= n; k++){
         for (i = 1; i <= k; i++)
             std::cout << '*';
         std::cout << std::endl;
     }
    return 0;
}