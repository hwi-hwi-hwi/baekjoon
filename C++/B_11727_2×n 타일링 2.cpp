#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int dp[1001] = {0};
	
	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 9;
	
	for(int i = 3; i <= n; i++){
		
		dp[i] = (dp[i-1] + (dp[i-2]*2)) % 10007;
	}
	
	cout << dp[n];
	
	return 0;
}
