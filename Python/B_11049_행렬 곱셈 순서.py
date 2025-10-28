import sys
input = sys.stdin.readline

n = int(input())

matrix = []
for i in range(n):
    row, column = map(int, input().split())

    if i == 0:
        matrix.append(row)

    matrix.append(column)

INT_MAX = 10**9
# dp: 행렬의 최소 스칼라 곱셈 횟수
dp = [[INT_MAX] * (n+1) for _ in range(n+1)]
for i in range(1, n+1):
    dp[i][i] = 0  # 주대각선 '0'으로 초기화

for idx in range(1, n):  # 대각선 index: 1 ~ n-1
    for i in range(1, (n-idx) + 1):  # 원소의 개수: (n - index) 개
        j = idx + i  # dp[i][j]에서, 항상 대각선 index = j - i

        for k in range(i, j):  # i <= k < j
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + (matrix[i-1] * matrix[k] * matrix[j]))

print(dp[1][n])