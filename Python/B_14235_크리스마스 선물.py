import sys
import heapq
input = sys.stdin.readline

n = int(input())
pq = []
for _ in range(n):
    a = list(map(int, input().split()))

    if a[0] == 0:  # 아이에게 선물 주기
        if not pq:  # 줄 선물이 없다면
            print(-1)
        else:
            print(-heapq.heappop(pq))
    else:  # a[0]개 선물 충전
        for gift in a[1:]:
            heapq.heappush(pq, -gift)