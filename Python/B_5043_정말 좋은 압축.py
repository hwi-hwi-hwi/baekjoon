n, b = map(int, input().split())

# 등비 수열 합
# 2^0 + 2^1 + ... + 2^n = 2^n+1 - 1
sum = 0
for i in range(b+1):
    sum += 2**i

if sum >= n:
    print("yes")
else:
    print("no")