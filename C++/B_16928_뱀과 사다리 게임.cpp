#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int board[101];  // 보드판 정보 (사다리 / 뱀 위치)
bool visited[101];

int bfs(){
    queue<pair<int, int>> q;  // (현재 위치, 이동 횟수)
    q.push({1, 0});
    visited[1] = true;

    while(!q.empty()){
        int pos = q.front().first;
        int count = q.front().second;
        q.pop();

        // 100 번 칸에 도착하면 종료
        if(pos == 100){
            return count;
        }

        // 주사위로 1 ~ 6 이동
        for(int dice = 1; dice <= 6; dice++){
            int nextPos = pos + dice;
            
            // 100 을 넘으면 이동 불가
            if(nextPos > 100){
                continue;
            }

            // 사다리 / 뱀 있으면 해당 칸으로 이동
            if(board[nextPos] != 0){
                nextPos = board[nextPos];
            }

            // 방문하지 않았다면 큐에 추가
            if(!visited[nextPos]){
                visited[nextPos] = true;
                q.push({nextPos, count+1});
            }

        }
    }

    return -1;
}

int main(){
    int n, m;
    cin >> n >> m;

    fill(board, board + 101, 0);
    fill(visited, visited + 101, false);

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        board[x] = y;
    }

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        board[u] = v;
    }
    
    cout << bfs();

    return 0;
}