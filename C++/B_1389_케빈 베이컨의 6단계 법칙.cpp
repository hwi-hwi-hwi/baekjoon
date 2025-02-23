#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n+1, vector<int>(n+1, INF));
    for(int i = 1; i <= n; i++){
        graph[i][i] = 0;
    }  // graph 배열 초기화

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        graph[a][b] = 1;
        graph[b][a] = 1;
    }  // 양방향 연결

    // 플로이드-워셜 알고리즘
    for(int k = 1; k <= n; k++){  // 중간(경유) 노드
        for(int i = 1; i <= n; i++){  // 출발 노드
            for(int j = 1; j <= n; j++){  // 도착 노드
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    // 답 찾기
    int minIndex = 1, minValue = INF;
    for(int i = 1; i <= n; i++){
        int baconSum = 0;
        for(int j = 1; j <= n; j++){
            baconSum += graph[i][j];
        }

        if(baconSum < minValue){
            minValue = baconSum;
            minIndex = i;
        }
    }

    cout << minIndex;

    return 0;
}