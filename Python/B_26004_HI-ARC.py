import sys
input = sys.stdin.readline

n = int(input())
str = input()

needed = ['H', 'I', 'A', 'R', 'C']

counts = {ch: 0 for ch in needed}

for ch in str:
    if ch in counts:
        counts[ch] += 1

print(min(counts.values()))