import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
m = int(input())

graph = [[] for _ in range(n+1)]
dist = [-1] * (n+1)
dist[1] = 0

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)


def bfs(start):
    q = deque()
    q.append(start)

    while q:
        cur = q.popleft()

        if dist[cur] >= 2:  # 새 거리가 2 이상일 때
            continue

        for nxt in graph[cur]:
            if dist[nxt] == -1:  # 아직 방문 안 했고
                dist[nxt] = dist[cur] + 1
                q.append(nxt)


bfs(1)

ans = sum(1 for i in range(2, n+1) if (1 <= dist[i] <= 2))

print(ans)