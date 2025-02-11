#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    // C(n, k) = C(n - 1, k - 1) + C(n - 1, k)
    // C(n, 0) = C(n, n) = 1

    vector<vector<int>> dp(n, vector(n, 0));
    for(int i = 0; i < n; i++){
        dp[i][0] = dp[i][i] = 1;

        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    cout << dp[n - 1][k - 1];

    return 0;
}