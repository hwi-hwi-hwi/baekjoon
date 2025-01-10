#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int m, n;
	cin >> m >> n;
	
	vector<vector<int>> tomato(n, vector<int>(m));
	queue<tuple<int, int, int>> q;  // (x��ǥ, y��ǥ, ��¥)
	int unripe_count = 0;
	int max_days = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> tomato[i][j];
			
			if(tomato[i][j] == 1){
				q.push(make_tuple(i, j, 0));
			}
			else if(tomato[i][j] == 0){
				unripe_count++;
			}
		}
	}
	
	int dx[] = {0, 0, -1, 1};
	int dy[] = {-1, 1, 0, 0};
	
	while(!q.empty()){
		auto [x, y, days] = q.front();
		q.pop();
		max_days = max(max_days, days);
		
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			// ���� ������ ����� �ʰ�, ���� ���� �丶�䰡 ���� ��� 
			if((0 <= nx && nx < n) && (0 <= ny && ny < m) && tomato[nx][ny] == 0){
				tomato[nx][ny] = 1;
				unripe_count--;
				q.push({nx, ny, days+1});
			}
		}
	}
	
	if(unripe_count > 0)
		cout << -1;
	else
		cout << max_days;
	
	return 0;
}
