#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int k, n;
		cin >> k >> n;
		// k�� nȣ 
		
		int dp[15][15] = {0};
		for(int i = 0; i <= n; i++){
			
			dp[0][i] = i;
		}
		
		for(int i = 1; i <= k; i++){  // �� 
			
			for(int j = 1; j <= n; j++){  // ȣ 
				
				dp[i][j] = dp[i][j-1] + dp[i-1][j];
			}
		}
		
		cout << dp[k][n] << endl;		 
	}
	
	return 0;
}
