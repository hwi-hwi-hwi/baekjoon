#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>> &graph, vector<bool> &visited){
	queue<int> q;
	q.push(start);
	visited[start] = true;

	// queue가 빌 때까지 반복
	while(!q.empty()){
		int current = q.front();
		q.pop();

		for(int next : graph[current]){
			// 방문하지 않은 정점이라면
			if(!visited[next]){
				visited[next] = true;
				q.push(next);
			}
		}
	}
}
int main(){
	//  정점의 개수 N과 간선의 개수 M
	int n, m;
	cin >> n >> m;

	// 간선의 양 끝점 u와 v
	vector<vector<int>> graph(n + 1);
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// 방문 여부 확인 배열
	vector<bool> visited(n + 1, false);
	// 연결 요소 개수 계산
	int connectedComponents = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			bfs(i, graph, visited);
			connectedComponents++;
		}
	}

	cout << connectedComponents;

	return 0;
}