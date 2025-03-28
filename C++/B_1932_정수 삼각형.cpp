#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> triangle(n, vector<int>(n, 0));
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // 입력 받기
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin >> triangle[i][j];
        }
    }

    // 가장 아래층 초기화
    for(int j = 0; j < n; j++){
        dp[n-1][j] = triangle[n-1][j];
    }

    // dp 채우기 (bottom - up)
    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            dp[i][j] = triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
        }
    }

    cout << dp[0][0];

    return 0;
}