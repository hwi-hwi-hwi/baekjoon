import sys
input = sys.stdin.readline

n, k = map(int, input().split())

coins = []
for _ in range(n):
    x = int(input())
    coins.append(x)

coins.sort()

dp = [0] * (k + 1)
dp[0] = 1
for coin in coins:
    for amount in range(coin, k+1):
        dp[amount] += dp[amount - coin]

print(dp[k])