import sys

n = int(sys.stdin.readline())
scores = list(map(int, sys.stdin.readlines()))

count = 0

for i in range(n-2, -1, -1):
    if scores[i] >= scores[i+1]:
        count += scores[i] - (scores[i+1] - 1)
        scores[i] = scores[i+1] - 1

print(count)