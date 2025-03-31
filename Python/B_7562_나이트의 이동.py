import sys
from collections import deque

dx = [-2, -1, 1, 2, -2, -1, 1, 2]
dy = [-1, -2, -2, -1, 1, 2, 2, 1]

def bfs(l, start, end):
    # 시작 = 목표
    if start == end:
        return 0

    queue = deque([(*start, 0)])  # (현재 x좌표, 현재 y좌표, 이동 횟수) 형태로 저장
    visited = [[False] * l for _ in range(l)]
    visited[start[0]][start[1]] = True  # start[0]과 start[1]은 시작 위치 (x, y)의 좌표

    while queue:
        x, y, moves = queue.popleft()

        for i in range(8):
            nx, ny, = x + dx[i], y + dy[i]

            if 0 <= nx < l and 0 <= ny < l and not visited[nx][ny]:
                if (nx, ny) == end:
                    return moves + 1

                queue.append((nx, ny, moves+1))
                visited[nx][ny] =True

t = int(sys.stdin.readline())

for _ in range(t):
    l = int(sys.stdin.readline())
    start = tuple(map(int, sys.stdin.readline().split()))
    end = tuple(map(int, sys.stdin.readline().split()))

    print(bfs(l, start, end))