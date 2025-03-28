from collections import deque

n, m = map(int, input().split())
targets = list(map(int, input().split()))

queue = deque(range(1, n+1))

count = 0

for target in targets:
    # target이 현재 큐에서 몇 번째 인덱스인지 찾기
    idx = queue.index(target)

    # 왼쪽 회전이 더 빠른 경우 -> idx만큼 이동
    if idx < len(queue) - idx:
        queue.rotate(-idx)
        count += idx
    # 오른쪽 회전이 더 빠른 경우 -> (len(queue) - idx)만큼 이동
    else:
        queue.rotate(len(queue) - idx)
        count += (len(queue) - idx)

    # 첫 번째 원소 제거
    queue.popleft()

print(count)