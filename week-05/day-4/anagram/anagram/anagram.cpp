#include "anagram.h"
#include <string>
#include <algorithm>

bool IsAnagram2(std::string str1, std::string str2){
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    return str1==str2;
}