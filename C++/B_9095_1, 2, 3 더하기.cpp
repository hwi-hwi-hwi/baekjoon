#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	int dp[11] = {0};
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i = 4; i < 11; i++){
		
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	
	while(t--){
		
		int n;
		cin >> n;
		
		cout << dp[n] << endl;
	}
	
	return 0;
}
