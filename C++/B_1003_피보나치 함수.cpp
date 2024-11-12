#include <iostream>
#include <vector>

using namespace std;

int main(){

	// dp[n][0]: 0�� ȣ�� Ƚ��, dp[n][1]: 1�� ȣ�� Ƚ��
	int dp[41][2] = {0};
	
	 // �ʱⰪ ����
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	
	// 2���� 40���� DP ���̺� ä���
	for(int i = 2; i <= 40; i++){
		
		dp[i][0] = dp[i-1][0] + dp[i-2][0];  // 0�� ȣ�� Ƚ��
		dp[i][1] = dp[i-1][1] + dp[i-2][1];  // 1�� ȣ�� Ƚ��
	}
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		cout << dp[n][0] << ' ' << dp[n][1] << "\n";
	}
	
	
	return 0;
}
