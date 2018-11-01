#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int i =0;
bool che = true;
bool checkNums(vector<int> numbers, vector<int> check){
    bool isinlist = true;

    for( int a=0; a < numbers.size(); ++a)
        if ((find(numbers.begin(),numbers.end(),check[i])) != numbers.end()){
            a=a+1;
        }else{
            che = false;
        }
        return true;
}
int main(int argc, char* args[])
{
    const vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    const vector<int> checker = {4, 8, 12, 16};

    if(checkNums(numbers, checker)){
        cout << "Good :)" << endl;
    }
    else{
        cout << "Not Good :(" << endl;
    }
    return 0;
}