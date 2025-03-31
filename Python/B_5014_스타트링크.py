from collections import deque

f, s, g, u, d = map(int, input().split())

def bfs():
    queue = deque([(s, 0)])  # (현재 층, 버튼 클릭 횟수)
    visited = [False] * (f + 1)
    visited[s] = True  # 시작 층 방문 처리

    while queue:
        currentFloor, buttonCount = queue.popleft()

        # 목표 층 도착하면 버튼 클릭 횟수 출력
        if currentFloor == g:
            return buttonCount

        # 위로 이동 (U 버튼)
        nextFloor = currentFloor + u
        if nextFloor <= f and not visited[nextFloor]:
            queue.append((nextFloor, buttonCount + 1))
            visited[nextFloor] = True

        # 아래로 이동 (D 버튼)
        nextFloor = currentFloor - d
        if nextFloor >= 1 and not visited[nextFloor]:
            queue.append((nextFloor, buttonCount + 1))
            visited[nextFloor] = True

    return "use the stairs"  # 목표 층 도달 불가 시

print(bfs())