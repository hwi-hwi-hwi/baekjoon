from collections import deque

# 수빈: n, 동생: k
n, k = map(int, input().split())

time = [-1] * (100001)  # 동생을 찾는 가장 빠른 시간
ways = [0] * (100001)  # 최단시간으로 도달하는 방법 수

dx = [-1, 1, 2]


def bfs(start):
    q = deque()
    q.append(start)
    time[start] = 0
    ways[start] = 1

    while q:
        cur = q.popleft()

        # 가지치기
        if time[k] != -1 and time[k] < time[cur]:
            continue

        for i in range(3):
            if i == 2:
                nxt = cur * dx[i]
            else:
                nxt = cur + dx[i]

            if 0 <= nxt <= 100000:
                if time[nxt] == -1 or time[nxt] > time[cur] + 1:
                    time[nxt] = time[cur] + 1
                    ways[nxt] = ways[cur]
                    q.append(nxt)
                elif time[nxt] == time[cur] + 1:
                    ways[nxt] += ways[cur]

    return time[k], ways[k]


t, w = bfs(n)
print(t)
print(w)