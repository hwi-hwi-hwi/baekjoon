a1, a0 = map(int, input().split())
c = int(input())
n0 = int(input())

isOk = True
for n in range(n0, 101):
    if (a1*n +a0) > c*n:
        isOk = False
        break

print(1 if isOk else 0)