n = int(input())
arr = list(map(int, input().split()))

dp = [1] * n

for i in range(n):  # i = 0부터 n-1까지
    for j in range(i):  # j = 0부터 i-1까지
        if arr[j] < arr[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))