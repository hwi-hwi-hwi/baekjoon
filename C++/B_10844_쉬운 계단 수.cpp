#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    // dp[i][j] : 길이가 i, 마지막 자리의 숫자가 j인 계단 수의 개수
    // ex) dp[2][3] = 2 <-(23, 43)

    long long dp[101][10] = {0};
    for(int i = 1; i <= 9; i++){
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++){  // 길이가 i일 때
        for(int j = 0; j <= 9; j++){  // 마지막 숫자가 j일 때
            // dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            if(0 < j){
                dp[i][j] += dp[i-1][j-1];
            }

            if(j < 9){
                dp[i][j] += dp[i-1][j+1];
            }

            dp[i][j] %= 1000000000;
        }
    }

    long long result = 0;
    for(int i = 0; i <= 9; i++){
        result = (result + dp[n][i]) % 1000000000;
    }

    cout << result;

    return 0;
}