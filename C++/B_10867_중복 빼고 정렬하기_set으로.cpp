#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> s;
    while(n--){
        int x;
        cin >> x;

        s.insert(x);
    }

    for(int k : s){
        cout << k << " ";
    }

    return 0;
}