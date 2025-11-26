import sys
from collections import deque
input = sys.stdin.readline

row, column = map(int, input().split())

graph = [list(input().strip()) for _ in range(row)]
visited = [[False] * column for _ in range(row)]

directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]  # 상하좌우
def bfs(start_row, start_column):
    # 시작 좌표를 큐에 넣기
    q = deque()
    q.append((start_row, start_column))
    visited[start_row][start_column] = True

    while q:
        r, c = q.popleft()

        for dr, dc in directions:
            nr = r + dr
            nc = c + dc

            # 범위 체크
            if (0 <= nr < row) and (0 <= nc < column):
                # 아직 방문하지 않은 칸 and 풀(‘#’)이 있는 칸
                if (not visited[nr][nc]) and graph[nr][nc] == '#':
                    visited[nr][nc] = True
                    q.append((nr, nc))

ans = 0

for i in range(row):
    for j in range(column):
        if graph[i][j] == '#' and not visited[i][j]:
            bfs(i, j)
            ans += 1

print(ans)