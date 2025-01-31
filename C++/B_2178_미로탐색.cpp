#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(vector<vector<int>>& maze, int n, int m){
    queue<pair<int, int>> q;
    q.push({0, 0});  // 시작점
    maze[0][0] = 1;  // 방문 처리

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 범위를 벗어나거나 이동할 수 없는 칸이면 무시
            if((nx < 0 || n <= nx) || (ny < 0 || m <= ny) || maze[nx][ny] != 1)
                continue;
            
            // 이동 가능한 경우
            maze[nx][ny] = maze[x][y] + 1;  // 거리 갱신
            q.push({nx, ny});
        }
    }

    return maze[n-1][m-1];
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> maze(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        for(int j = 0; j < m; j++){
            maze[i][j] = s[j] - '0';
        }
    }

    cout << bfs(maze, n, m);

    return 0;
}