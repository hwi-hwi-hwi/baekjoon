from collections import deque
import sys
input = sys.stdin.readline

n, m, r = map(int, input().split())


graph = [[] for _ in range(n+1)]
visited = [False] * (n+1)
for _ in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(n+1):
    graph[i].sort()  # 오름차순으로 방문

order = [0] *(n+1)  # 각 정점의 방문 순서 저장
cnt = 1  # 방문 순서 카운터


def bfs(start):
    q = deque()
    q.append(start)
    visited[start] = True

    global cnt
    order[start] = cnt
    cnt += 1

    while q:
        cur = q.popleft()

        for nxt in graph[cur]:
            if not visited[nxt]:
                q.append(nxt)
                visited[nxt] = True
                order[nxt] = cnt
                cnt += 1


bfs(r)

for i in range(1, n+1):
    print(order[i])