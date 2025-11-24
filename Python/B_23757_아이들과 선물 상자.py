import sys
import heapq
input = sys.stdin.readline

# 선물 상자 수 n, 아이들 수 m
n, m = map(int, input().split())

have = list(map(int, input().split()))  # 각 상자에 들어있는 선물 개수
want = list(map(int, input().split()))  # 각 아이가 원하는 선물 개수

# 최대 힙
pq = []
for x in have:
    heapq.heappush(pq, -x)

ok = True

for w in want:
    if not pq:
        ok = False
        break

    # 현재 선물이 가장 많이 들어있는 상자 꺼내기
    cur = -heapq.heappop(pq)

    if cur < w:
        ok = False
        break
    else:
        remain = cur - w
        if remain > 0:
            heapq.heappush(pq, -remain)

if ok:
    print(1)
else:
    print(0)