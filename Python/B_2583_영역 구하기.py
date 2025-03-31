import sys
from collections import deque

m, n, k = map(int, sys.stdin.readline().split())
grid = [[0] * n for _ in range(m)]  # 0으로 초기화된 M x N 격자

for _ in range(k):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    for i in range(y1, y2):
        for j in range(x1, x2):
            grid[i][j] = 1  # y 좌표는 세로 방향, x 좌표는 가로 방향이므로 grid[y][x]로 접근

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(startY, startX):
    queue = deque([(startY, startX)])
    grid[startY][startX] = 1  # 방문 처리
    areaSize = 1

    while queue:
        y, x = queue.popleft()

        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]

            if 0 <= ny < m and 0 <= nx < n and grid[ny][nx] == 0:
                queue.append((ny, nx))
                grid[ny][nx] = 1
                areaSize += 1

    return areaSize

areas = []
count = 0

for i in range(m):
    for j in range(n):
        if grid[i][j] == 0:
            areas.append(bfs(i, j))
            count += 1

areas.sort()
print(count)
print(*areas)