#include <iostream>
#include <vector>

using namespace std;


int main(){
	
	// 시간초과 해결하기 위해 
	ios::sync_with_stdio(false);  // C 표준 입출력과 C++ 표준 입출력을 분리해 속도 개선
    cin.tie(NULL);  // cin과 cout의 tie를 끊어서 불필요한 flush를 방지
    
	int n, m, q;
	cin >> n >> m >> q;
	
	vector<vector<int>> arr(n, vector<int>(m));
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < m; j++){
			
			cin >> arr[i][j];
		}
	}
	
	while(q--){
		
		int num;
		cin >> num;
		
		if(num == 0){
			int i, j, k;
			cin >> i >> j >> k;
			
			arr[i][j] = k;
		}
		else if(num == 1){
			int i, j;
			cin >> i >> j;
			 
			/*int temp[m];
			for(int a = 0; a < m; a++){
				
				temp[a] = arr[i][a];
				arr[i][a] = arr[j][a];
				arr[j][a] = temp[a];
			} */
			
			swap(arr[i], arr[j]);
		}
	}
	
	for(int a = 0; a < n; a++){
		
		for(int b = 0; b < m; b++){
			
			cout << arr[a][b];
			if(b < m-1)		cout << ' ';
		}
		
		if(a < n-1)		cout << '\n';
	}
	
	return 0;
}
