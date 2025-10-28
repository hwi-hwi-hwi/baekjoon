import sys
input = sys.stdin.readline

n, k = map(int, input().split())

coins = []
for _ in range(n):
    amount = int(input())
    coins.append(amount)

coins.sort()

dp = [sys.maxsize] * (k+1)
dp[0] = 0
for coin in coins:
    for amount in range(coin, k+1):
        if dp[amount - coin] != sys.maxsize:
            dp[amount] = min(dp[amount - coin] + 1, dp[amount])

if dp[k] == sys.maxsize:
    print(-1)
else:
    print(dp[k])