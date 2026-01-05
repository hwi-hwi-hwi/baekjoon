import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    days = int(input())
    stocks = list(map(int, input().split()))

    profit = 0

    buy = []
    max_price = -1
    for s in reversed(stocks):
        max_price = max(max_price, s)

        if s < max_price:
            profit += max_price - s
        else:
            continue

    print(profit)