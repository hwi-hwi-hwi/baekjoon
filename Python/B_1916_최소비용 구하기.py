import sys
import heapq

input = sys.stdin.readline

n = int(input())
m = int(input())

# 그래프(인접 리스트) 초기화
graph = [[] for _ in range(n + 1)]

# 버스 정보 입력
for _ in range(m):
    start, end, cost = map(int, input().split())
    graph[start].append((end, cost))

# 출발점과 도착점 입력
startCity, endCity = map(int, input().split())

# 다익스트라 알고리즘 함수
def dijkstra(start):
    INF = float('inf')
    distance = [INF] * (n + 1)
    distance[start] = 0

    pq = []
    # (비용, 도시) 형태로 우선순위 큐에 삽입
    heapq.heappush(pq, (0, start))  # 초기값: (0, 출발도시) 삽입

    while pq:
        currentCost, currentCity = heapq.heappop(pq)  # 현재 도시와 비용 추출

        # 기존 최단 거리보다 크면 무시 (갱신할 필요 없음)
        if currentCost > distance[currentCity]:
            continue

        for nextCity, nextCost in graph[currentCity]:
            totalCost = currentCost + nextCost  # 현재 비용 + 이동 비용

            if totalCost < distance[nextCity]:  # 최단 거리 갱신
                distance[nextCity] = totalCost
                heapq.heappush(pq, (totalCost, nextCity))  # 갱신된 값 추가

    return distance

result = dijkstra(startCity)

print(result[endCity])
