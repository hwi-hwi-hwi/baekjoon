import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())

graph = [[] for _ in range(n + 1)]

for _ in range(m):
    x, y = map(int, input().split())
    graph[x].append(y)

dist = [-1] * (n+1)


def bfs(start):
    q = deque()
    q.append(start)
    dist[start] = 0

    while q:
        cur = q.popleft()

        if cur == n:
            return dist[cur]

        for nxt in graph[cur]:
            if 1 <= nxt <= n and dist[nxt] == -1:
                dist[nxt] = dist[cur] + 1
                q.append(nxt)

    return -1


print(bfs(1))