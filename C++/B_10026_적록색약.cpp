#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<char>> rgb;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int n;

void bfs(int x, int y, char color, vector<vector<char>>& grid){
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            // 범위 안에 있고,
            if((0 <= nx && nx < n) && (0 <= ny && ny < n)){
                // 방문하지 않았고, 같은 색이면 탐색
                if(!visited[nx][ny] && grid[nx][ny] == color){
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}


int main(){
    cin >> n;

    rgb.resize(n, vector<char>(n));
    visited.resize(n, vector<bool>(n, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> rgb[i][j];
        }
    }

    // *일반인*
    int normalCount = 0;

    // 방문 여부 초기화
    fill(visited.begin(), visited.end(), vector<bool>(n, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                bfs(i, j, rgb[i][j], rgb);
                normalCount++;
            }
        }
    }

    // *적록색약*
    vector<vector<char>> rgb2 = rgb;  // 원본 복사
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(rgb2[i][j] == 'R')
                rgb2[i][j] = 'G';
        }
    }

    fill(visited.begin(), visited.end(), vector<bool>(n, false));
    
    int colorWeeknessCount = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                bfs(i, j, rgb2[i][j], rgb2);
                colorWeeknessCount++;
            }
        }
    }

    cout << normalCount << ' ' << colorWeeknessCount;

    return 0;
}