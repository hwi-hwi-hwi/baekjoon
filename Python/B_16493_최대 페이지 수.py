import sys
input = sys.stdin.readline

total_days, num = map(int, input().split())
chapter = []
for _ in range(num):
    need_days, pages = map(int, input().split())
    chapter.append((need_days, pages))

dp = [0] * (total_days + 1)
for need_days, pages in chapter:
    for day in range(total_days, need_days - 1, -1):
        dp[day] = max(dp[day], dp[day - need_days] + pages)

print(dp[total_days])