#include <iostream>
#include <algorithm>  // min
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	// ��� �迭�� ������ 2D �迭 
	// (dp[i][0] -> ����, dp[i][1] -> �ʷ�, dp[i][2] -> �Ķ�)
	int dp[n][3];
	
	// ù ��° ���� ��� �ʱ�ȭ
	cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
	
	// �� ��° ������ n��° �������� ����� ���
	for(int i = 1; i < n; i++){
		
		int r, g, b;
		cin >> r >> g >> b;
		
		// ���� ���� �������� ĥ�� ���� �ּ� ���
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + r;
		
		// ���� ���� �ʷ����� ĥ�� ���� �ּ� ���
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + g;
		
		// ���� ���� �Ķ����� ĥ�� ���� �ּ� ���
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + b;
	}
	
	cout << min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	
	return 0;
}
