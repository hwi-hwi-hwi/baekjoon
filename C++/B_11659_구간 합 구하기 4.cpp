#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> num(n+1, 0);
	vector<int> prefix(n+1, 0);  // 구간 합 배열
	for(int i = 1; i <= n; i++){
		
		cin >> num[i];
		prefix[i] = prefix[i-1] + num[i];
	}
	
	while(m--){
		
		int i, j;
		cin >> i >> j;
		
		cout << prefix[j] - prefix[i-1] << "\n";
	}

	return 0;
}
