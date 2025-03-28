n = int(input())
x = list(map(int, input().split()))

# 식 변형 참고
sumAll = sum(x)  # 모든 xi의 합
sumSquares = sum(xi**2 for xi in x)  # 모든 xi의 제곱의 합

# 구하는 값 = (sum_all^2 - sum_squares) / 2
ans = (sumAll ** 2 - sumSquares) // 2
print(ans)