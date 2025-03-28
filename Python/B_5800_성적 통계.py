k = int(input())

for classNum in range(1, k + 1):
    data = list(map(int, input().split()))
    scores = data[1:]

    maxScore = max(scores)
    minScore = min(scores)
    scores.sort(reverse=True)
    largestGap = 0

    for i in range(len(scores) - 1):
        largestGap = max(largestGap, scores[i] - scores[i+1])

    print(f"Class {classNum}")
    print(f"Max {maxScore}, Min {minScore}, Largest gap {largestGap}")