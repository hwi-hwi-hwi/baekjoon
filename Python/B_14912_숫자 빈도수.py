n, d = map(int, input().split())
d = str(d)

cnt = 0

for i in range(1, n+1):
    cnt += str(i).count(d)

print(cnt)