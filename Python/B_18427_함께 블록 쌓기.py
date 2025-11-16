import sys
input = sys.stdin.readline

n, m, height = map(int, input().split())

blocks = []
for _ in range(n):
    blocks.append(list(map(int, input().split())))

dp = [0] * (height + 1)
dp[0] = 1

for student_blocks in blocks:
    # 이 학생 블록 안 씀 (기존 dp 값 유지)
    new_dp = dp[:]

    # 이 학생 블록 중 하나 사용 (dp 업데이트)
    for h in student_blocks:  # 이 학생이 가진 블록들 / 현재 학생의 블록 높이 = h
        for cur in range(h, height + 1):  # cur = 만들고 싶은 높이(목표 높이)
            new_dp[cur] += dp[cur - h]
            new_dp[cur] %= 10007

    dp = new_dp

print(dp[height])