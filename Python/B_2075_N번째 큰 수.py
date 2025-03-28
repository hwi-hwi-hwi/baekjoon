import sys
import heapq  # 우선순위 큐

n = int(sys.stdin.readline().strip())  # 공백 제거 후 정수로 변환

heap = []

for _ in range(n):
    row = list(map(int, sys.stdin.readline().split()))

    for num in row:
        if len(heap) < n:
            heapq.heappush(heap, num)
        else:
            heapq.heappushpop(heap, num)  # 힙 크기가 n개 초과 시 가장 작은 값 제거 후 새로운 값 추가

print(heap[0])

