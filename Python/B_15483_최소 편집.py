import sys
input = sys.stdin.readline

S = input().strip()
T = input().strip()
m = len(S)
n = len(T)

INF = 10**9
dp = [[INF] * (n+1) for _ in range(m+1)]
for i in range(0, m+1):
    dp[i][0] = i  # 0열 초기화 (모두 삭제 -> i 번)
for j in range(0, n+1):
    dp[0][j] = j  # 0행 초기화 (모두 삽입 -> j 번)

for i in range(1, m+1):
    for j in range(1, n+1):
        if S[i-1] == T[j-1]:
            a = 0
        else:
            a = 1

        dp[i][j] = min(dp[i][j-1] + 1, dp[i-1][j] + 1, dp[i-1][j-1] + a)

print(dp[m][n])