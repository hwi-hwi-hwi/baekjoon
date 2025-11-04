import sys
input = sys.stdin.readline

n, goal_len = map(int, input().split())

# 길이 i를 만드는 방법의 수
dp = [0] * (goal_len + 1)
dp[0] = 1

for _ in range(n):
    pipe_len, quantity = map(int, input().split())

    # 이 파이프 길이(pipe_len)를 1개 ~ quantity개까지 쓰는 경우를 모두 반영
    for length in range(goal_len, -1, -1):  # 만들고 싶은 길이
        for count in range(1, quantity+1):  # 이 파이프를 count개 쓸 때
            left = length - (pipe_len * count)  # 남은 길이
            if left < 0:
                break

            dp[length] += dp[left]

print(dp[goal_len])