n = int(input())

dp = [False] * (n+4)
# True: win / False: lose
# dp[i] = True면, 돌이 i개 있을 때, 현재 턴인 사람이 이길 수 있음
# dp[i] = False면, 돌이 i개 있을 때, 현재 턴인 사람이 어떤 선택을 해도 지는 상황임
dp[1] = False
dp[2] = True
dp[3] = False
dp[4] = True
for i in range(5, n+1):
    if not dp[i-1] or not dp[i-3]:
        dp[i] = True

print("SK" if dp[n] else "CY")