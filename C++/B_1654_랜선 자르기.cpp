#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);  // ����� �ӵ� ����ȭ
    cin.tie(NULL);
    
	int k, n;
	cin >> k >> n;
	
	vector<int> cables(k);
	for(int i = 0; i < k; i++){
		
		cin >> cables[i];
	}
	
	long long left = 1;
	long long right = *max_element(cables.begin(), cables.end());
	long long ans = 0;
	while(left <= right){
		// mid �� ����� �� overflow ����
		long long mid = left + (right - left) / 2;
		long long sum = 0;
		
		for(int i = 0; i < k; i++){
			
			sum += cables[i] / mid;
		}
		
		if(sum >= n){
			ans = mid;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}
