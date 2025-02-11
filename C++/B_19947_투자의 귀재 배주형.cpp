#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // 초기 비용 h, 투자 기간 y
    int h, y;
    cin >> h >> y;

    vector<int> dp(y+1, 0);
    dp[0] = h;
    for(int i = 1; i <= y; i++){
        dp[i] = max(dp[i], dp[i-1] * 105 / 100);
        
        if(i >= 3){
            dp[i] = max(dp[i], dp[i-3] * 120 / 100);
        }

        if(i >= 5){
            dp[i] = max(dp[i], dp[i-5] * 135 / 100);
        }
    }

    cout << dp[y];

    return 0;
}