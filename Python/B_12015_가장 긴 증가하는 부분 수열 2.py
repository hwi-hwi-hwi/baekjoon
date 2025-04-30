n = int(input())
a = list(map(int, input().split()))

dp = []

def lower_bound(arr,target):
    left = 0
    right = len(arr)

    while left < right:
        mid = (left + right) // 2

        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid

    return left

for num in a:
    pos = lower_bound(dp, num)
    if pos == len(dp):
        dp.append(num)
    else:
        dp[pos] = num

print(len(dp))