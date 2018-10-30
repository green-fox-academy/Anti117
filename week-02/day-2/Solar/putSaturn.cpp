#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> putSaturn(const vector<string>& planets){
    vector<string> plan = planets;
    plan.push_back("Saturn");
    return plan;
}

int main(int argc, char* args[]) {
    vector<string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};
    for(const auto& planet : putSaturn(planets))
    {
        cout << planet << " ";
    }
    return 0;
}
