num = []
sum = 0
for i in range(5):
    x = int(input())
    sum += x
    num.append(x)

num.sort()

print(sum // 5)
print(num[2])