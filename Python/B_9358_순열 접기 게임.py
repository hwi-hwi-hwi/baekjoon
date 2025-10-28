def fold(arr):
    while len(arr) > 2:
        newArr = []
        n = len(arr)

        for i in range((n+1) // 2):
            if i == n - 1 - i:  # 가운데 하나만 남은 경우
                newArr.append(arr[i] * 2)
            else:
                newArr.append(arr[i] + arr[(n-1) - i])

        arr = newArr

    return arr

t = int(input())

for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    arr = fold(arr)

    if arr[0] > arr[1]:
        print(f"Case #{i+1}: Alice")
    else:
        print(f"Case #{i+1}: Bob")