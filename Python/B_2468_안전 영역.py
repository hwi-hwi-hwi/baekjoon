from collections import deque

n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

minH = min(map(min, graph))
maxH = max(map(max, graph))

def bfs(x, y, visited, height):
    queue = deque([(x, y)])
    visited[x][y] = True

    while queue:
        cx, cy = queue.popleft()

        for i in range(4):
            nx, ny = cx + dx[i], cy + dy[i],
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny] and graph[nx][ny] > height:
                visited[nx][ny] = True
                queue.append((nx, ny))

maxSafeArea = 1

for h in range(minH - 1, maxH + 1):
    visited = [[False] * n for _ in range(n)]
    safeArea = 0

    for i in range(n):
        for j in range(n):
            if graph[i][j] > h and not visited[i][j]:
                bfs(i, j, visited, h)
                safeArea += 1

    maxSafeArea = max(maxSafeArea, safeArea)

print (maxSafeArea)