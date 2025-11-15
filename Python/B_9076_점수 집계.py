import sys
input = sys.stdin.readline
write = sys.stdout.write

t = int(input())
for _ in range(t):
    scores = list(map(int, input().split()))

    max_score = max(scores)
    min_score = min(scores)

    scores.remove(max_score)
    scores.remove(min_score)

    max_score = max(scores)
    min_score = min(scores)

    if max_score - min_score >= 4:
        write("KIN\n")
    else:
        write(str(sum(scores)) + "\n")