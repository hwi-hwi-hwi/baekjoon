import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())
graph = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(x, y):
    queue = deque([(x, y)])
    graph[x][y] = 0
    area = 1

    while queue:  # 큐가 빌 때까지
        cx, cy = queue.popleft()

        for i in range(4):
            nx, ny = cx + dx[i], cy + dy[i]

            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 1:
                queue.append((nx, ny))
                graph[nx][ny] = 0
                area += 1

    return area

count = 0  # 그림 개수
maxArea = 0

for i in range(n):
    for j in range(m):
        if graph[i][j] == 1:
            count += 1
            maxArea = max(maxArea, bfs(i, j))

print(count)
print(maxArea)