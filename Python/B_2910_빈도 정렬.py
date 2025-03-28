from collections import Counter

n, c = map(int, input().split())
arr = list(map(int, input().split()))

freq = Counter(arr)

sortedArr = sorted(arr, key=lambda x: (-freq[x], arr.index(x)))

print(*sortedArr)