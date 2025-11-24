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

    if x == y:
        temp = []
        while x != y:
            temp.append(y)
            y = heapq.heappop(pq)

        for k in temp:
            heapq.heappush(pq, k)

    x, y = x+y, x+y

    heapq.heappush(pq, x)
    heapq.heappush(pq, y)

print(sum(pq))