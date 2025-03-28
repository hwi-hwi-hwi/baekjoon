n = int(input())
m = int(input())

arr = list(map(int, input().split()))
arr.sort()

left, right = 0, n-1
count = 0

while left < right:
    total = arr[left] + arr[right]

    if total == m:
        count += 1
        left += 1
        right -= 1
    elif total < m:
        left += 1
    elif total > m:
        right -= 1

print(count)