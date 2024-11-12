#include <iostream>
#include <algorithm>  // fill 함수 

using namespace std;

int main(){
	
	// 1, 5, 9, 13, ... -> 4n-3
	int n;
	cin >> n;
	
	char nn[4*n - 3][4*n - 3];
	fill(&nn[0][0], &nn[0][0] + (4*n - 3) * (4*n - 3), ' ');
	// 배열 크기랑 인덱스 구별 주의!
	int a(0), b(4*n - 4);
	for(int i = 0; i < n; i++){
		
		for(int j = a; j <= b; j++){
			
			nn[a][j] = nn[j][a] = nn[b][j] = nn[j][b] = '*';
		}
		
		a += 2;
		b -= 2;
	} 
	
	for(int i = 0; i < 4*n - 3; i ++){
		
		for(int j = 0; j < 4*n - 3; j++){
			
			cout << nn[i][j];
		}
		cout << '\n';
	}
	
	
	return 0;
}
