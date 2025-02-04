#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string roomNum;
    cin >> roomNum;

    vector<int> count(10, 0);

    for(char c : roomNum){
        count[c - '0']++;
    }

    int x = (count[6] + count[9] + 1) / 2;
    count[6] = count[9] = x;

    int ans = *max_element(count.begin(), count.end());
    cout << ans;

    return 0;
}