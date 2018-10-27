#include <iostream>

int main() {
   int a = 3;
   std::cout << a + 10 << std::endl;
   //First exercise

   int b = 100;
   std::cout << b - 94 << std::endl;
   //Second exercise

   int c = 44;
   std::cout << c * 2 << std::endl;
   //Third exercise

   int d = 125;
   std::cout << d / 5 << std::endl;
   //Fourth exercise

   int e = 8;
   std::cout << e * e << std::endl;
   //Fifth exercise

   int f1 = 123;
   int f2 = 345;
   //Sixth exercise

   if (f1 * 2> f2){
       std::cout << "Bigger" << std::endl;
   } else if (f2 > f1 * 2){
       std::cout << "Smaller" << std::endl;
   }
   //Seventh exercise

   int g1 = 350;
   int g2 = 200;

    if (g2 * 2> g1){
        std::cout << "Bigger" << std::endl;
    } else if (g1 > g2 * 2){
        std::cout << "Smaller" << std::endl;
    }
    //Eighth exercise

    int h = 135798745;

    bool decide =false;
    if (h % 11 == 0){
        decide = true;
    }
    std::cout << std::boolalpha << decide << std::endl;
    //Ninth exercise

    int i1 =10;
    int i2 = 3;

    decide = false;
    if (i1 > (i2 *i2) && i1 < (i2 * i2 * i2)){
        decide = true;
    }
    std::cout << std::boolalpha << decide << std::endl;
    //Tenth exercise


    int j = 1521;

    decide = false;
    if (j % 3 == 0 || j % 5 == 0) {
        decide = true;
    }
    std::cout << std::boolalpha << decide << std::endl;
    //Eleventh exercise

    std::string k = "Apple";
    k += (k + k + k);
    std::cout << k << std::endl;
    //Twelfth exercise


    return 0;
}