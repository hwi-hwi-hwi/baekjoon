import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(m)]
visited = [[False] * n for _ in range(m)]

# 오른쪽, 아래쪽
dr = [0, 1]
dc = [1, 0]

def bfs(sr, sc):
    q = deque()
    q. append((sr, sc))
    visited[sr][sc] = True

    while q:
        r, c = q.popleft()

        for i in range(2):
            nr = r + dr[i]
            nc = c + dc[i]

            if 0 <= nr < m and 0 <= nc < n:
                if not visited[nr][nc]:
                    if graph[nr][nc] == 1:
                        visited[nr][nc] = True
                        q.append((nr, nc))


bfs(0, 0)

if visited[m-1][n-1]:
    print("Yes")
else:
    print("No")