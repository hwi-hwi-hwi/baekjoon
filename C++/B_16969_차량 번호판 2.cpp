#include <iostream>

using namespace std;

const int MOD = 1000000009;

int main(){
    string input;
    cin >> input;

    long long ans = 1;

    // 1. 첫 번째 문자가 'c' 인지 'd' 인지 확인
    if(input[0] == 'c'){
        ans *= 26;
    }
    else if(input[0] == 'd'){
        ans *= 10;
    }
    // 2. 두 번째 문자부터 이전 문자(input[i-1])와 비교하며 경우의 수 계산
    for(size_t i = 1; i < input.size(); i++){
        if(input[i] == 'c'){
            if(input[i-1] == 'c'){
                ans = (ans * 25) % MOD;
            }
            else{
                ans = (ans * 26) % MOD;
            }
        }
        else if(input[i] == 'd'){
            if(input[i-1] == 'd'){
                ans = (ans * 9) % MOD;
            }
            else{
                ans = (ans * 10) % MOD;
            }
        }
    }

    cout << ans;

    return 0;
}