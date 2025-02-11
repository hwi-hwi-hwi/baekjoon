#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<int> complexSizes;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    int houseCount = 1;

    while(!q.empty()){  // 큐 빌 때 까지
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if((0 <= nx && nx < n) && (0 <= ny && ny < n)){
                if(map[nx][ny] == 1 && !visited[nx][ny]){
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                    houseCount++;
                }
            }
        }
    }

    return houseCount;
}

int main(){
    cin >> n;
    map.resize(n, vector<int>(n));
    visited.resize(n, vector<bool>(n, false));

    for(int i = 0; i < n; i++){
        string row;
        cin >> row;
        for(int j = 0; j < n; j++){
            map[i][j] = row[j] - '0';
        }
    }

    int total = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(map[i][j] == 1 && !visited[i][j]){  // 새로운 단지 발견
                total++;
                complexSizes.push_back(bfs(i, j));
            }
        }
    }

    sort(complexSizes.begin(), complexSizes.end());

    cout << total << "\n";
    for(const auto& v : complexSizes){
        cout << v <<"\n";
    }

    return 0;
}