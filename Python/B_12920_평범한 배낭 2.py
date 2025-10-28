import sys
input = sys.stdin.readline

n, capacity = map(int, input().split())

items = []
for _ in range(n):
    weight, value, quantity = map(int, input().split())

    # 이진 분할
    p = 1  # 묶음 크기(1, 2, 4, 8, ... , 마지막 남은 개수 한 번에 묶기)
    while quantity > 0:
        take = min(p, quantity)  # 남은 개수(k)가 p보다 작으면 그만큼만
        items.append((weight * take, value * take))  # 한 묶음씩(새로운 가상 물건이 됨) items list에 추가
        quantity -= take
        p *= 2  # 다음엔 2배로 (1, 2, 4, 8, ...)
        # ex: k=13 → (1), (2), (4), (6)

# DP 테이블 초기화 (무게 0~M까지)
dp = [0] * (capacity + 1)
# dp[i] = "무게 j일 때 얻을 수 있는 최대 만족도"

for weight, value in items:  # 각 물건을 하나씩 순회
    for i in range(capacity, weight - 1, -1):
        dp[i] = max(dp[i], dp[i - weight] + value)


print(dp[capacity])