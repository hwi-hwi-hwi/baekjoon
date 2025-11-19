import sys
from collections import deque

input = sys.stdin.readline

n, k = map(int, input().split())
MAX = 100001
dist = [-1] * MAX  # x까지의 최단 시간
prev = [-1] * MAX  # x에 오기 직전 위치

def bfs(start):
    q = deque([start])
    dist[start] = 0  # 시작점

    while q:
        cur = q.popleft()

        if cur == k:  # 동생 위치 도달하면 종료
            return

        for nxt in (cur-1, cur+1, cur*2):
            if (0 <= nxt < MAX) and (dist[nxt] == -1):
                dist[nxt] = dist[cur] + 1
                prev[nxt] = cur
                q.append(nxt)

bfs(n)

# 최소 시간 출력
print(dist[k])
# 경로 복원
path = []
cur = k
while cur != -1:
    path.append(cur)
    cur = prev[cur]

path.reverse()
print(*path)