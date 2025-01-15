#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int startX, startY, count = 0;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void bfs(vector<vector<char>> &campus, int startX, int startY, int n, int m){
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    q.push({startX, startY});
    visited[startX][startY] = true;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if((0 <= nx && nx < n) && (0 <= ny && ny < m) && !visited[nx][ny]){
                // 벽이 아니면 탐색 가능
                if(campus[nx][ny] != 'X'){
                    visited[nx][ny] = true;
                    q.push({nx, ny});

                    // 사람(P)을 만난 경우
                    if(campus[nx][ny] == 'P')
                        count++;
                }
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    // O는 빈 공간, X는 벽, I는 도연이, P는 사람
    vector<vector<char>> campus(n, vector<char>(m));
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> campus[i][j];
            
            if(campus[i][j] == 'I'){
                startX = i;
                startY = j;
            }
        }
    }

    bfs(campus, startX, startY, n, m);

    if(count == 0)
        cout << "TT";
    else
        cout << count;

    return 0;
}