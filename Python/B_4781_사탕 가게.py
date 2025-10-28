import sys
input = sys.stdin.readline

while True:
    n, money = input().split()
    n = int(n)
    money = float(money)

    if (n == 0) and (money == 0.00):
        break

    # “DP 배열 인덱스는 정수여야 하고, float은 오차가 나니까 int로 변경
    money = int(money * 100 + 0.5)

    candy = []
    for _ in range(n):
        cal, price = input().split()
        cal = int(cal)
        price = int(float(price) * 100 + 0.5)
        candy.append((cal, price))

    dp = [0] * (money + 1)
    for cal, price in candy:
        for m in range(price, money + 1):
            dp[m] = max(dp[m], dp[m - price] + cal)

    print(dp[money])