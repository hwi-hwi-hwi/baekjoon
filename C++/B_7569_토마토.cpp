#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

// M : 가로, N : 세로, H : 높이
int m, n, h;
int box[100][100][100];
int days[100][100][100];  // 익는 날짜 저장

const int dx[] = {-1, 1, 0, 0, 0, 0};
const int dy[] = {0, 0, -1, 1, 0, 0};
const int dz[] = {0, 0, 0, 0, -1, 1};

bool isInside(int x, int y, int z){
    return ((0 <= x && x < m) && ( 0 <= y && y < n) && (0 <= z && z < h));
}

int bfs(){
    queue<tuple<int, int, int>> q;
    int daysCount = 0;

    for(int z = 0; z < h; z++){
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                if(box[z][y][x] == 1){
                    q.push({x, y, z});
                    days[z][y][x] = 0;
                }
            }
        }
    }

    while(!q.empty()){  // 큐가 빌 때까지
        auto [x, y, z] = q.front();  // tie(x, y, z) = q.front();
        q.pop();

        for(int i = 0; i < 6; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if(isInside(nx, ny, nz) && box[nz][ny][nx] == 0){  // 박스 안에 있고 안 익은 상태면
                box[nz][ny][nx] = 1;
                days[nz][ny][nx] = days[z][y][x] + 1;
                daysCount = max(daysCount, days[nz][ny][nx]);
                q.push({nx, ny, nz});
            }
        }
    }

    // 모든 토마토가 익었는지 확인
    for(int z = 0; z < h; z++){
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                if(box[z][y][x] == 0){
                    return -1;
                }
            }
        }
    }

    return daysCount;
}

int main(){

    cin >> m >> n >> h;

    for(int z = 0; z < h; z++){
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                cin >> box[z][y][x];
                days[z][y][x] = -1;
            }
        }
    }

    cout << bfs();

    return 0;
}