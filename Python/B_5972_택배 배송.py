import sys
import heapq

input = sys.stdin.readline

n, m = map(int, input().split())

graph = [[] for _ in range(n+1)]

for _ in range(m):
    a, b, c = map(int, input().split())
    # 양방향이니까 양쪽 다 추가
    graph[a].append((b, c))  # a에서 b로 가는 길, 비용 c
    graph[b].append((a, c))  # b에서 a로 가는 길, 비용 c

INF = 10**15
# 시작 노드(1번)에서 각 노드까지 도달하는 데 필요한 최소 비용
dist = [INF] * (n+1)

def dijkstra(start):
    dist[start] = 0
    pq = []
    # 항상 튜플 (비용, 노드)를 넣는 이유
    # → 파이썬 힙은 튜플 비교 시 첫 번째 원소(cost) 기준으로 정렬하기 때문
    heapq.heappush(pq, (0, start))  # (비용, 노드)

    while pq:
        current_cost, cur = heapq.heappop(pq)

        # 이미 더 짧은 경로로 방문했다면 무시
        if current_cost > dist[cur]:
            continue

        # 인접 노드 탐색
        for nxt, cost in graph[cur]:
            new_cost = current_cost + cost

            if new_cost < dist[nxt]:
                dist[nxt] = new_cost
                heapq.heappush(pq, (new_cost, nxt))

dijkstra(1)
print(dist[n])