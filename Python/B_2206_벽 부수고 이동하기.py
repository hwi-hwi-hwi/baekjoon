import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
graph = [list(map(int, input().strip())) for _ in range(n)]
# 같은 좌표라도 벽을 부쉈는지 여부에 따라 이후 이동 가능성이 달라지므로
# (r,c,0)과 (r,c,1)은 서로 다른 상태로 취급해야 한다.
visited = [[[False] * 2 for _ in range(m)] for _ in range(n)]  # (r, c, broken)
dist = [[[-1] * 2 for _ in range(m)] for _ in range(n)]  # (r, c, broken)
dist[0][0][0] = 1

dr = [-1, 1, 0, 0]
dc = [0, 0, -1, 1]


def bfs(sr, sc):
    q = deque()
    q.append((sr, sc, 0))  # (r, c, broken)
    visited[sr][sc][0] = True

    while q:
        r, c, broken = q.popleft()

        if r == n - 1 and c == m - 1:
            return dist[r][c][broken]

        for k in range(4):
            nr = r + dr[k]
            nc = c + dc[k]

            if 0 <= nr < n and 0 <= nc < m:
                # 빈 칸(0): broken 유지
                if graph[nr][nc] == 0 and not visited[nr][nc][broken]:  # 벽 부시지 X
                        visited[nr][nc][broken] = True
                        dist[nr][nc][broken] = dist[r][c][broken] + 1
                        q.append((nr, nc, broken))
                # 벽(1): 아직 안 부쉈을 때만 broken=1로
                elif graph[nr][nc] == 1 and not broken and not visited[nr][nc][1]: # 벽 부시기 O
                        nbroken = 1
                        visited[nr][nc][nbroken] = True
                        dist[nr][nc][nbroken] = dist[r][c][broken] + 1
                        q.append((nr, nc, nbroken))

    return -1


print(bfs(0, 0))