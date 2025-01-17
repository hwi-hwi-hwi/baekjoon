#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }

    // 플로이드-워셜 알고리즘
    for(int k = 0; k < n; k++){  // 중간 노드
        for(int i = 0; i < n; i++){  // 시작 노드
            for(int j = 0; j < n; j++){  // 도착 노드
                if(graph[i][k] == 1 && graph[k][j] == 1)
                    graph[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}