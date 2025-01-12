#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string input;
    cin >> input;

    vector<string> s;
    for(std::string::size_type i = 0; i < input.length(); i++){
        s.push_back(input.substr(i));
    }
    sort(s.begin(), s.end());

    for(const auto& a : s){
        cout << a << "\n";
    }

    return 0;
}