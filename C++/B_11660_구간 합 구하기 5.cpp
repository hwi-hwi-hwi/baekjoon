#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> graph, prefixSum;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    graph.assign(n+1, vector<int>(n+1, 0));
    prefixSum.assign(n+1, vector<int>(n+1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> graph[i][j];

            // 누적 합 계산
            prefixSum[i][j] = graph[i][j] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];
        }
    }

    while(m--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = prefixSum[x2][y2] - prefixSum[x1-1][y2] - prefixSum[x2][y1-1] + prefixSum[x1-1][y1-1];
        cout << sum << "\n";
    }

    return 0;
}