m = 0
t = 0

for _ in range(4):
    x = int(input())
    t += x

while t >= 60:
    t -= 60
    m += 1

print(m)
print(t)