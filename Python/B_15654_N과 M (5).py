# from itertools import permutations
#
# n, m = map(int, input().split())
# numbers = list(map(int, input().split()))
#
# numbers.sort()
#
# result = permutations(numbers, m)
#
# for seq in result:
#     print(*seq)

##################################################

# Backtracking 이용한 풀이
n, m = map(int, input().split())
numbers = list(map(int, input().split()))

numbers.sort()

visited = [False] * n
result = []

def backtracking():
    if len(result) == m:
        print(*result)
        return

    for i in range(n):
        if not visited[i]:
            visited[i] = True
            result.append(numbers[i])

            backtracking()

            result.pop()
            visited[i] = False

backtracking()