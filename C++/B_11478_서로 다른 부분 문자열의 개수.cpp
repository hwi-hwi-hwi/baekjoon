#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    set<string> substrings;

    int n = s.size();
    for(int i = 0; i < n; i++){
        string temp = "";

        for(int j = i; j < n; j++){
            temp += s[j];
            substrings.insert(temp);
        }
    }

    cout << substrings.size();

    return 0;
}