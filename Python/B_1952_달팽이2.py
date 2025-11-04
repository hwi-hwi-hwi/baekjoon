import sys
input = sys.stdin.readline

row, column = map(int, input().split())

visited = [[False] * (column) for _ in range(row)]
# 오른쪽(0) → 아래(1) → 왼쪽(2) → 위(3) → 다시 오른쪽(0) [시계 방향]
dx = [0, 1, 0, -1]  # 행
dy = [1, 0, -1, 0]  # 열

x, y = 0, 0
direction = 0  # 현재 방향 인덱스 (0 = 오른쪽)
turn_count = 0
visited[x][y] = True  # 시작점 방문

for i in range((row * column) - 1):  # 첫 칸 이미 방문했으므로 -1
    # next x, next y
    nx = x + dx[direction]
    ny = y + dy[direction]

    # 범위 벗어나거나 이미 방문한 경우 → 방향 전환
    if (nx < 0) or (row <= nx) or (ny < 0) or (column <= ny) or (visited[nx][ny] == True):
        # 시계 방향 회전
        direction = (direction+1) % 4
        turn_count += 1
        nx = x + dx[direction]
        ny = y + dy[direction]

    visited[nx][ny] = True
    # x, y(현재 위치) -> nx, ny(다음 위치)로 갱신
    x = nx
    y = ny

print(turn_count)