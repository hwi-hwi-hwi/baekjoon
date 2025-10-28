import sys
input = sys.stdin.readline

n, need_caffeine = map(int, input().split())

coffee = list(map(int, input().split()))

# dp[k]: K만큼의 카페인을 섭취하기 위해 마셔야 하는 커피의 최소 개수
INF = 10**9
dp = [INF] * (need_caffeine+1)
# 0카페인을 만드는 데 필요한 커피는 0개
dp[0] = 0
for caffeine in coffee:
    for c in range(need_caffeine, caffeine-1, -1):  # 역방향 (중복 방지)
        dp[c] = min(dp[c], dp[c - caffeine] + 1)

if dp[need_caffeine] == INF:
    print(-1)
else:
    print(dp[need_caffeine])