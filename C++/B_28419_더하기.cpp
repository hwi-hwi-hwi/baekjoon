#include <iostream>
#include <vector>

using  namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long oddSum = 0, evenSum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){  // index : 0, 2, 4, ... -> 1번, 3번, 5번, ...
            oddSum += a[i];
        }
        else{
            evenSum += a[i];
        }
    }

    long long x = oddSum - evenSum;

    if(n == 3){
        if(x > 0){
            cout << -1;
        }
        else{
            cout << -x;
        }
    }
    else{
        cout << ((x >= 0) ? x : -x);
    }


    return 0;
}