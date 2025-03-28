n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]

m, k = map(int, input().split())
b = [list(map(int, input().split())) for _ in range(m)]

c = [[0] * len(b[0]) for _ in range(len(a))]

for i in range(len(a)):
    for j in range(len(b[0])):
        for k in range(len(a[0])):
            c[i][j] += a[i][k] * b[k][j]

for row in c:
    print(*row)