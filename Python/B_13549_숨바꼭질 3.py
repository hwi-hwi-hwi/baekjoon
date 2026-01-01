from collections import deque

# 수빈: n, 동생: k
n, k = map(int, input().split())

time = [-1] * (100001)

dx = [-1, 1, 2]


def bfs(start):
    q = deque()
    q.append(start)
    time[start] = 0

    while q:
        cur = q.popleft()

        if cur == k:
            return time[cur]

        for i in range(3):
            if i == 2:
                nxt = cur * dx[i]
            else:
                nxt = cur + dx[i]

            if 0 <= nxt <= 100000:
                if i == 2:
                    if time[nxt] == -1 or time[nxt] > time[cur] + 0:
                        q.appendleft(nxt)
                        time[nxt] = time[cur] + 0
                else:
                    if time[nxt] == -1 or time[nxt] > time[cur] + 1:
                        q.append(nxt)
                        time[nxt] = time[cur] + 1

    return -1


print(bfs(n))