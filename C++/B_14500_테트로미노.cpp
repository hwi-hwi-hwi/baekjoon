#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> graph;
vector<vector<bool>> visited;
int maxSum = 0;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int depth, int sum){
    if(depth == 4){  // 4칸 이동하면 종료
        maxSum = max(maxSum, sum);
        return;
    }

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if((0 <= nx && nx < n) && (0 <= ny && ny < m) && (!visited[nx][ny])){
            visited[nx][ny] = true;
            dfs(nx, ny, depth+1, sum+graph[nx][ny]);
            visited[nx][ny] = false;  // 백트래킹
        }
    }
}

void checkExtraShape(int x, int y){  // 'ㅗ', 'ㅏ', 'ㅜ', 'ㅓ' 모양을 따로 체크
    // 'ㅗ'
    if((1 <= x && x < n) && (1 <= y && y < m-1)){
        maxSum = max(maxSum, graph[x][y] + graph[x-1][y] + graph[x][y-1] + graph[x][y+1]);
    }
    // 'ㅏ'
    if((1 <= x && x < n-1) && (0 <= y && y < m-1)){
        maxSum = max(maxSum, graph[x][y] + graph[x-1][y] + graph[x+1][y] + graph[x][y+1]);
    }
    // 'ㅜ'
    if((0 <= x && x < n-1) && (0 < y && y < m-1)){
        maxSum = max(maxSum, graph[x][y] + graph[x][y-1] + graph[x][y+1] + graph[x+1][y]);
    }
    // 'ㅓ'
    if((0 < x && x < n-1) && (0 < y && y < m)){
        maxSum = max(maxSum, graph[x][y] + graph[x][y-1] + graph[x-1][y] + graph[x+1][y]);
    }
}

int main(){
    cin >> n >> m;
    graph.assign(n, vector<int>(m, 0));
    visited.assign(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> graph[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            visited[i][j] = true;
            dfs(i, j, 1, graph[i][j]);
            visited[i][j] = true;
            checkExtraShape(i, j);
        }
    }

    cout << maxSum;

    return 0;
}