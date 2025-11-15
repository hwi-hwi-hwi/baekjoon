import sys
input = sys.stdin.readline

n, k = map(int, input().split())
numbers = list(map(int, input().split()))

# 전체 점수 = 선택된 값 - 고정된 값(0 ~ k-1)
fix = (k-1) * k // 2
# 선탟된 값 -> 가장 큰 값 k 개 선택
numbers.sort(reverse=True)

total = sum(numbers[:k]) - fix

print(total)