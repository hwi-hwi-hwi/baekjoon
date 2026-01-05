n = int(input())
price = []
for _ in range(n):
    p = int(input())
    price.append(p)

m = int(input())
ans = 0
for _ in range(m):
    x = int(input())
    ans += price[x-1]

print(ans)