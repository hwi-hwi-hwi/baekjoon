#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;
    while(n--){
        int x;
        cin >> x;

        auto it = find(v.begin(), v.end(), x);
        if(it == v.end()){
            // x가 없는 경우
            v.push_back(x);
        }
        else{
            continue;
        }
    }
    sort(v.begin(), v.end());

    for(auto k : v){
        cout << k << " ";
    }

    return 0;
}