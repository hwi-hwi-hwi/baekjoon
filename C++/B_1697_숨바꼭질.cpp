#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	
	int n, k;
	cin >> n >> k;
	
	const int MAX = 100000;
	vector<bool> visited(MAX + 1, false);
	
	queue<pair<int, int>> q;  // (���� ��ġ, ��� �ð�)
	q.push({n, 0});
	visited[n] = true;
	
	while(!q.empty()){
		int current = q.front().first;  // ���� ��ġ
		int time = q.front().second;  // ������� �ɸ� �ð�
		q.pop();
		
		if(current == k){
			cout << time;
			return 0;
		}
		
		if(current - 1 >= 0 && !visited[current - 1]){
			q.push({current - 1, time + 1});
			visited[current - 1] = true;
		}
		if(current + 1 <= MAX && !visited[current + 1]){
			q.push({current + 1, time + 1});
			visited[current + 1] = true;
		}
		if(current * 2 <= MAX && !visited[current * 2]){
			q.push({current * 2, time + 1});
			visited[current * 2] = true;
		}
	}
	
	return 0;
}
