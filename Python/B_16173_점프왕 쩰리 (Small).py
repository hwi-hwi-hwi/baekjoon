from collections import deque

n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]
visited = [[False] * n for _ in range(n)]

# 오른쪽 / 아래
dr = [0, 1]
dc = [1, 0]

can_move = False


def bfs(sr, sc):
    q = deque()
    q.append((sr, sc))
    visited[sr][sc] = True
    global can_move

    while q:
        r, c = q.popleft()
        move = graph[r][c]

        for i in range(2):
            nr = r + (dr[i] * move)
            nc = c + (dc[i] * move)

            if 0 <= nr < n and 0 <= nc < n:
                if not visited[nr][nc]:
                    if graph[nr][nc] == -1:
                        can_move = True
                        return
                    else:
                        q.append((nr, nc))
                        visited[nr][nc] = True

bfs(0, 0)

if can_move:
    print("HaruHaru")
else:
    print("Hing")