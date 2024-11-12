#include <iostream>
#include <algorithm>  // min
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	// 비용 배열을 저장할 2D 배열 
	// (dp[i][0] -> 빨강, dp[i][1] -> 초록, dp[i][2] -> 파랑)
	int dp[n][3];
	
	// 첫 번째 집의 비용 초기화
	cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
	
	// 두 번째 집부터 n번째 집까지의 비용을 계산
	for(int i = 1; i < n; i++){
		
		int r, g, b;
		cin >> r >> g >> b;
		
		// 현재 집을 빨강으로 칠할 때의 최소 비용
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + r;
		
		// 현재 집을 초록으로 칠할 때의 최소 비용
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + g;
		
		// 현재 집을 파랑으로 칠할 때의 최소 비용
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + b;
	}
	
	cout << min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	
	return 0;
}
