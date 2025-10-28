import sys

input = sys.stdin.readline

n, can_study_time = map(int, input().split())

chapter_list = []
for _ in range(n):
   need_time, score = map(int, input().split())
   chapter_list.append((need_time, score))

# dp[time] = 공부 시간 need_time 을 썼을 때 얻을 수 있는 최대 점수
dp = [0] * (can_study_time + 1)
for need_time, score in chapter_list:
   for time in range(can_study_time, need_time - 1, -1):
      dp[time] = max(dp[time], dp[time - need_time] + score)

print(dp[can_study_time])