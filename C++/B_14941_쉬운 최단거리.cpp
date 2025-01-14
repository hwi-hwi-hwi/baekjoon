#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<vector<int>> map;  // 지도
vector<vector<int>> dist; // 거리 정보

// 상하좌우
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void bfs(int startX, int startY)
{
    queue<pair<int, int>> q;
    // 목표 지점을 시작점으로
    q.push({startX, startY});
    dist[startX][startY] = 0;

    while (!q.empty())
    { // 큐가 빌 때까지
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 지도 밖으로 나가지 않도록
            if ((0 <= nx && nx < n) && (0 <= ny && ny < m))
            {
                // 갈 수 있는 땅(1)이고 아직 방문하지 않았다면
                if (map[nx][ny] == 1 && dist[nx][ny] == -1)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    map.resize(n, vector<int>(m));
    dist.resize(n, vector<int>(m, -1));

    int startX, startY;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 2)
            {
                startX = i;
                startY = j;
            }
        }
    }

    bfs(startX, startY);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 0)
            {
                cout << 0 << " ";
            }
            else if (dist[i][j] == -1)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
