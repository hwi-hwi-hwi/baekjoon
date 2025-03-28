# n,m = map(int, input().split())

# arr1 = list(map(int, input().split()))

# arr2 = list(map(str, input().strip()))

# print(n,m,arr1,arr2)

n,m = map(int, input().split())

arr1 = list(map(int, input().split()))

arr2 = list(map(int, input().split()))

arr = list(set(arr1 + arr2))
arr.sort()



print(*arr)