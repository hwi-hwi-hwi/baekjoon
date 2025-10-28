import sys

input = sys.stdin.readline

can_study_time, subject = map(int, input().split())

importance_list = []
for _ in range(subject):
    importance, need_time = map(int, input().split())
    importance_list.append((importance, need_time))

dp = [0] * (can_study_time + 1)
for importance, need_time in importance_list:
    for time in range(can_study_time, need_time-1, -1):
        dp[time] = max(dp[time], dp[time - need_time] + importance)

print(dp[can_study_time])