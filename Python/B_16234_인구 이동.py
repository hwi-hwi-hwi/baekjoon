from collections import deque
N, L, R = map(int, input().split())

country = [list(map(int, input().split())) for _ in range(N)]
# 상하좌우
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(row, col, visited):
    q = deque()
    q.append((row, col))
    visited[row][col] = True

    union = [(row, col)]
    total = country[row][col]

    while q:
        x, y = q.popleft()

        for k in range(4):
            nx, ny = x + dx[k], y + dy[k]
            if 0 <= nx < N and 0 <= ny < N:
                if not visited[nx][ny]:
                    if L <= abs(country[x][y] - country[nx][ny]) <= R:
                        visited[nx][ny] = True
                        q.append((nx, ny))
                        union.append((nx, ny))
                        total += country[nx][ny]

    return union, total


day = 0
while True:  # 하루 반복
    visited = [[False] * N for _ in range(N)]
    moved = False

    # 모든 나라 방문해서 연합 확인
    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                union, total = bfs(i, j, visited)
                if len(union) >= 2:
                    moved = True
                    avg = total // len(union)

                    for x, y in union:
                        country[x][y] = avg

    if not moved:
        break
    else:
        day += 1

print(day)