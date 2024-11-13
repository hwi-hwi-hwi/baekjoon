#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a, b;
	cin >> a >> b;
	
	int x = a.length(), y = b.length();
	// DP 동적 배열 선언 (길이가 x+1, y+1인 배열로 초기화)
	vector<vector<int>> dp(x+1, vector<int>(y+1, 0));
	
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	cout << dp[x][y];
	
	return 0;
}
