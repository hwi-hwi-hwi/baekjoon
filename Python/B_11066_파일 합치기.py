import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    num = int(input())
    file_size = [0] + list(map(int, input().split()))  # 인덱스 1부터 시작

    # prefix sum 계산
    prefix = [0] * (num + 1)
    for i in range(1, num + 1):
        prefix[i] = prefix[i-1] + file_size[i]

    INF = 10 ** 9
    # dp[i][j]: i번째 파일부터 j번째 파일까지 합치는 최소 비용
    dp = [[INF] * (num + 1) for _ in range(num + 1)]
    for i in range(1, num + 1):
        dp[i][i] = 0  # 자기 자신만 있을 땐 비용 0

    # 구간 길이 2 이상일 때 최소 비용 계산
    for length in range(2, num + 1):  # 합칠 구간 길이
        for i in range(1, (num - length + 1) + 1):
            j = length + i - 1  # 시작점 i에서 length만큼 떨어진 끝점 j
            for k in range(i, j):
                cost = dp[i][k] + dp[k+1][j] + (prefix[j] - prefix[i-1])  # prefix는 i~j 구간
                dp[i][j] = min(dp[i][j], cost)

    print(dp[1][num])