import sys
input = sys.stdin.readline

ans = int(input())
while True:
    op = input().strip()
    if op == "=":
        break
    elif op == "+":
        x = int(input())
        ans += x
    elif op == "-":
        x = int(input())
        ans -= x
    elif op == "*":
        x = int(input())
        ans *= x
    elif op == "/":
        x = int(input())
        ans //= x

print(ans)