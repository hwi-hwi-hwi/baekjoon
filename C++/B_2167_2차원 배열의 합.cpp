#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> v(n+1, vector<int>(m+1));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> v[i][j];
		}
	}
	
	int k;
	cin >> k;
	while(k--){
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		
		int sum = 0;
		for(int a = i; a <= x; a++){
			for(int b = j; b<= y; b++){
				sum += v[a][b];
			}
		}
		
		cout << sum << "\n";
	}
	
	return 0;
}
