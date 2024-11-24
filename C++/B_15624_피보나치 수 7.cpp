#include <iostream>

using namespace std;

int main(){
	
    int n;
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }
	else if(n == 1 || n == 2){
        cout << 1;
        return 0;
    }

    int dp[1000000] = {0};
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
    	
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    }

    cout << dp[n];
    
    return 0;
}
