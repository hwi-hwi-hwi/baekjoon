import sys

input = sys.stdin.readline

min_customer, n = map(int, input().split())

city_list = []
for _ in range(n):
    cost, customer = map(int, input().split())
    city_list.append((cost, customer))

# 무한 배낭 문제
# dp[i] = i명의 고객을 늘이기 위해 필요한 최소 비용
dp = [10**9] * (min_customer + 1000)
# 0명의 고객 = 비용 0
dp[0] = 0

for cost, customer in city_list:
    for i in range(customer, min_customer + 1000):
        dp[i] = min(dp[i], dp[i - customer] + cost)

ans = min(dp[min_customer:])
print(ans)