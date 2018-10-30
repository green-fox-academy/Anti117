#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> makingMatches(const vector<string>& girls, const vector<string>& boys) {
vector<string> pair = girls;
int n = sizeof(girls)/sizeof(boys);
for (int i = 0; i < boys.size(); i++)
    pair.insert(pair.begin()+ n, boys[i]);
    n += 2;

    return pair;
}

int main(int argc, char* args[])
{
    vector<string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    vector<string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};
    for(const auto& planet : makingMatches(girls, boys)) {
        cout << planet << " ";
    }
    return 0;
}