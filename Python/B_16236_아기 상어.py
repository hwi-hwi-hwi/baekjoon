import sys
from collections import deque
input = sys.stdin.readline

# 상하좌우
dr = [-1, 1, 0, 0]
dc = [0, 0, -1, 1]

n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]


def bfs(sr, sc, shark_size):
    q = deque()
    q.append((sr, sc))

    dist = [[-1] * n for _ in range(n)]
    dist[sr][sc] = 0

    move_candidates = []

    while q:
        r, c = q.popleft()

        for k in range(4):
            nr = r + dr[k]
            nc = c + dc[k]

            if 0 <= nr < n and 0 <= nc < n:  # 범위 내
                if graph[nr][nc] <= shark_size:  # 이동 가능
                    if dist[nr][nc] == -1:  # 거리 계산 아직
                        q.append((nr, nc))
                        dist[nr][nc] = dist[r][c] + 1

                        if 0 < graph[nr][nc] < shark_size:  # 먹을 수 있음
                            move_candidates.append((dist[nr][nc], nr, nc))  # (거리, row, col)

    if not move_candidates:  # 후보 없으면
        return None

    return min(move_candidates)  # 후보 있으면


# 1) 상어 시작 위치 찾기
sr, sc = -1, -1
for i in range(n):
    for j in range(n):
        if graph[i][j] == 9:
            sr, sc = i, j
            break

    if sr != -1:
        break


time_count = 0
shark_size = 2
eaten_count = 0
# 2) 먹을 수 있을 때까지 반복
while True:
    result = bfs(sr, sc, shark_size)

    if result is None:
        break
    else:
        dist_to_fish, r, c = result
        time_count += dist_to_fish

        graph[sr][sc] = 0
        graph[r][c] = 9
        sr, sc = r, c

        eaten_count += 1
        if shark_size == eaten_count:
            shark_size += 1
            eaten_count = 0


print(time_count)