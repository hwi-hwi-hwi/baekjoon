n = int(input())
cards = list(map(int, input().split()))

operations = []

for i in range(n):
    if cards[i] != i + 1:
        targetIndex = cards.index(i+1)
        operations.append((i+1, targetIndex+1))
        cards[i:targetIndex+1] = cards[i:targetIndex+1][::-1]

print(len(operations))
for l, r in operations:
    print(l, r)