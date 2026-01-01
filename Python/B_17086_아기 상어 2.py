from collections import deque

n, m = map(int, input().split())

graph = [list(map(int, input().split())) for _ in range(n)]
dist = [[-1] * m for _ in range(n)]
for i in range(n):
    for j in range(m):
        if graph[i][j] == 1:
            dist[i][j] = 0

# 상하좌우 + 대각선
dr = [-1, 1, 0, 0, -1, -1, 1, 1]
dc = [0, 0, -1, 1, -1, 1, -1, 1]


def bfs():
    q = deque()

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                q.append((i, j))

    while q:
        r, c = q.popleft()

        for i in range(8):
            nr = r + dr[i]
            nc = c + dc[i]

            if 0 <= nr < n and 0 <= nc < m:
                if dist[nr][nc] == -1:
                    q.append((nr, nc))
                    dist[nr][nc] = dist[r][c] + 1


bfs()
ans = max(map(max, dist))

print(ans)