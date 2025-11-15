import sys
input = sys.stdin.readline

n = int(input())
scores = []
for _ in range(n):
    num, kor, eng, math, sci = map(int, input().split())
    scores.append([num, kor, eng, math, sci])

goods = []
for i in range(1, 5):
    scores.sort(key=lambda x: (-x[i], x[0]))
    goods.append(scores[0][0])
    scores.pop(0)

print(*goods)