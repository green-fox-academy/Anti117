#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string containsSeven(const vector<int>& numbers) {
    for(int a = 0; a < numbers.size(); a++){
        if(numbers[a] == 7)
            return "Hoorray";
    }
    return "Noooo";
}

string containsSeven_stdfind(const vector<int>& numbers) {
    if ( find(numbers.begin(), numbers.end(), 7) != numbers.end())
        return "Hoorray";
            else
        return "Noooo";
            return 0;
}

int main() {
    const vector<int> numbers = {1, 2, 3, 4, 5};
    cout << containsSeven(numbers) << endl;
    cout << containsSeven_stdfind(numbers) << endl;
    return 0;
}