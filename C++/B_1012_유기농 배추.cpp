#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& field, int x, int y, int m, int n);

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int m, n, k;
		cin >> m >> n >> k;
		
		vector<vector<int>> field(m, vector<int>(n, 0));
		
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			
			field[x][y] = 1;
		}
		
		int worms = 0;
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(field[i][j] == 1){
					dfs(field, i, j, m, n);
					worms++;
				}
			}
		}
		
		cout << worms << "\n";	
	}
	
	return 0;
}

void dfs(vector<vector<int>>& field, int x, int y, int m, int n){
	int dx[] = {0, 0, -1, 1};
	int dy[] = {-1, 1, 0, 0};
	
	field[x][y] = 0;  // 현재 배추 방문 처리
	
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		// 범위 내에 있고, 배추가 존재하면 DFS 탐색
		if((0 <= nx && nx < m && 0 <= ny && ny < n) && field[nx][ny] == 1)
			dfs(field, nx, ny, m, n);
	}
}
