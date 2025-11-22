import sys
input = sys.stdin.readline

n, m = map(int, input().split())

graph = [[] for _ in range(n+1)]

for _ in range(m):
    # A가 B를 신뢰 → B를 해킹하면 A도 해킹 가능 → B -> A 방향으로 저장
    a, b = map(int, input().split())
    graph[b].append(a)

def dfs(start):
    visited = [False] * (n + 1)
    stack = [start]
    visited[start] = True
    cnt = 1  # 자기 자신 포함

    while stack:
        cur = stack.pop()

        for nxt in graph[cur]:
            if not visited[nxt]:
                visited[nxt] = True
                cnt += 1
                stack.append(nxt)

    return cnt

count = [0] * (n+1)
max_hack = 0

for i in range(1, n+1):
    count[i] = dfs(i)
    max_hack = max(max_hack, count[i])

for i in range(1, n+1):
    if count[i] == max_hack:
        print(i, end=" ")