import sys
input = sys.stdin.readline

n = int(input())
lose = list(map(int, input().split()))
joy = list(map(int, input().split()))

MAX_HP = 100

dp = [0] * (MAX_HP + 1)

for i in range(n):
    for hp in range(MAX_HP - 1, lose[i] - 1, -1):
        dp[hp] = max(dp[hp], dp[hp - lose[i]] + joy[i])

print(max(dp[1:]))