import sys
input = sys.stdin.readline

n = int(input())
cute = 0
not_cute = 0
for _ in range(n):
    x = int(input())

    if x == 1:
        cute += 1
    elif x == 0:
        not_cute += 1

if not_cute > cute:
    print("Junhee is not cute!")
else:
    print("Junhee is cute!")