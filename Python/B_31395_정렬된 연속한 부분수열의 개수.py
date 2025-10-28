def count(n, a):
    cnt = 0
    length = 1

    for i in range(1, n):
        if a[i - 1] < a[i]:
            length += 1
        else:
            cnt += length * (length + 1) // 2
            length = 1

    cnt += length * (length + 1) // 2

    return cnt

import sys

input = sys.stdin.readline

n = int(input())

a = list(map(int, input().split()))

print(count(n,a))