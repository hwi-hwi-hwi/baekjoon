#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
	// 입력 
	int com;
	cin >> com;
	
	vector<vector<int>> graph(com+1);
	vector<bool> connected(com+1, false);
	connected[1] = true;
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		
		int a, b;
		cin >> a >> b;
		
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	// BFS(너비 우선 탐색, Breadth-First Search) 
	queue<int> q;
	q.push(1);  // 1번 컴퓨터부터 감염 시작
	connected[1] = true;
	int count = 0;
	
	while(!q.empty()){
		
		int current = q.front();
		q.pop();
		
		for(int neighbor : graph[current]){
			
			if(!connected[neighbor]){
				connected[neighbor] = true;
				q.push(neighbor);
				count++;
			}
		}
	}
	
	cout << count;
	
	return 0;
}
