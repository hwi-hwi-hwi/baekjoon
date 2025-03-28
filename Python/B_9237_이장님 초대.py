n = int(input())
trees = list(map(int, input().split()))
trees.sort(reverse=True)

maxDay = 0  # 각 나무가 다 자라는 데 걸리는 시간 중 최장 시간
for i in range(n):
    maxDay = max(maxDay, (trees[i] + (i+1)))

print(maxDay + 1)