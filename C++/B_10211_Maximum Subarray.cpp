#include <iostream>
#include <climits> // INT_MIN
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		int x[n+1];
		int y[n+1];  // ���ӵ� �迭 ���� �ִ� 
		y[0] = 0;
		int maxSub = INT_MIN;
		
		for(int i = 1; i <= n; i++){
			
			cin >> x[i];
		}
		
		for(int i = 1; i <= n; i++){
			
			y[i] = max(x[i] + y[i-1], x[i]);
			maxSub = max(maxSub, y[i]);
		}
		
		cout << maxSub << endl;
	}
	
	return 0;
}
