import sys
from collections import deque
input = sys.stdin.readline

# 체스판 크기 n
n = int(input())

r1, c1, r2, c2 = map(int, input().split())

visited = [[False] * n for _ in range(n)]

moves = [(-2, -1), (-2, 1), (0, -2), (0, 2), (2, -1), (2, 1)]

def bfs(start_r, start_c, end_r, end_c):
    q = deque()
    q.append((start_r, start_c, 0))  # (r, c, dist)
    visited[start_r][start_c] = True

    while q:
        r, c, dist = q.popleft()

        if r == end_r and c == end_c:
            return dist

        for dr, dc in moves:
            nr = r + dr
            nc = c + dc

            if (0 <= nr < n) and (0 <= nc < n):
                if not visited[nr][nc]:
                    visited[nr][nc] = True
                    q.append((nr, nc, dist+1))

    # 도달 못 하면 -1
    return -1

ans = bfs(r1, c1, r2, c2)
print(ans)