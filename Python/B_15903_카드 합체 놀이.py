import sys
import heapq
input = sys.stdin.readline

# 카드의 개수 n, 카드 합체 횟수 m
n, m = map(int, input().split())

cards = list(map(int, input().split()))

pq = []
for k in cards:
    heapq.heappush(pq, k)

for _ in range(m):
    x = heapq.heappop(pq)
    y = heapq.heappop(pq)

    s = x + y

    heapq.heappush(pq, s)
    heapq.heappush(pq, s)

print(sum(pq))