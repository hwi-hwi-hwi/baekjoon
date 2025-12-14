import math
row, column, n, m = map(int, input().split())

x = math.ceil(row / (n+1))
y = math.ceil(column / (m+1))

print(x*y)