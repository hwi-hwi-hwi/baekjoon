#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> score(n);
	for(int i = 0; i < n; i++){
		
		cin >> score[i];
	}
	
	vector<int> dp(n, 0);
	dp[0] = score[0];
	dp[1] = score[0] + score[1];
	dp[2] = max((score[0]+score[2]), (score[1]+score[2]));
	for(int i = 3; i < n; i++){
		
		dp[i] = max((dp[i-3]+score[i-1]+score[i]), (dp[i-2]+score[i]));
	}
	
	cout << dp[n-1];	
	
	return 0;
}
