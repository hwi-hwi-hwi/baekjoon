#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(n+1, vector(n+1, 0));
    for(int i = 0; i <= n; i++){
        dp[i][0] = dp[i][i] = 1;

        for(int j = 1; j < i; j++){
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
        }
    }

    cout << dp[n][k];

    return 0;
}