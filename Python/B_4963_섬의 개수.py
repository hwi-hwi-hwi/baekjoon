import sys
from collections import deque
input = sys.stdin.readline

# 상하좌우 + 대각선
dr = [-1, 1, 0, 0, -1, -1, 1, 1]
dc = [0, 0, -1, 1, -1, 1, -1, 1]


def bfs(sr, sc):
    q = deque()
    q.append((sr, sc))
    visited[sr][sc] = True

    while q:
        r, c = q.popleft()

        for i in range(8):
            nr = r + dr[i]
            nc = c + dc[i]

            if 0 <= nr < row and 0 <= nc < col:
                if not visited[nr][nc]:
                    if graph[nr][nc] == 1:
                        q.append((nr, nc))
                        visited[nr][nc] = True


while True:
    col, row = map(int, input().split())

    if col == 0 and row == 0:
        break

    graph = [list(map(int, input().split())) for _ in range(row)]
    visited = [[False] * col for _ in range(row)]

    count = 0
    for i in range(row):
        for j in range(col):
            if not visited[i][j]:
                if graph[i][j] == 1:
                    bfs(i, j)
                    count += 1

    print(count)