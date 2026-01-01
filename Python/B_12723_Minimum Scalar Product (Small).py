t = int(input())

for i in range(t):
    n = int(input())
    v1 = list(map(int, input().split()))
    v2 = list(map(int, input().split()))

    v1.sort()
    v2.sort(reverse=True)

    ans = 0
    for j in range(n):
        ans += (v1[j] * v2[j])

    print(f"Case #{i+1}: {ans}")