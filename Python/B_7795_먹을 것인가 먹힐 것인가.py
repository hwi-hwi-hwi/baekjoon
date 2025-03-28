import sys
# 입력을 빠르게 받기 위한 sys.stdin.readline
input = sys.stdin.readline

t = int(input())

for i in range(t):
    n, m = map(int, input().split())

    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    A.sort()
    B.sort()

    # 투 포인터 기법을 위한 변수
    count = 0
    bIndex = 0

    # A의 각 원소에 대해 B의 원소를 비교
    for a in A:
        # B의 값이 a보다 작은 경우 쌍을 찾은 것으로 간주
        while bIndex < m and B[bIndex] < a:
            bIndex += 1
        # 현재까지 B에서 a보다 작은 원소들의 개수는 Bindex
        count += bIndex

    print(count)