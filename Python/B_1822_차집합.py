import sys

input = sys.stdin.readline

na, nb = map(int, input().split())
a = list(map(int, input().split()))
b = set(map(int, input().split()))

result = [x for x in a if x not in b]
result.sort()

print(len(result))
if result:
    print(*result)