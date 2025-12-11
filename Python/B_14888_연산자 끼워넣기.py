import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
plus, minus, multi, div = map(int, input().split())

min_val = 10**9
max_val = -10**9

def dfs(idx, val, plus, minus, multi, div):
    if idx == n-1:
        global max_val, min_val
        max_val = max(max_val, val)
        min_val = min(min_val, val)
        return

    next_num = arr[idx+1]
    if plus > 0:
        dfs(idx+1, val+next_num, plus-1, minus, multi, div)
    if minus > 0:
        dfs(idx + 1, val - next_num, plus, minus-1, multi, div)
    if multi > 0:
        dfs(idx + 1, val * next_num, plus, minus, multi-1, div)
    if div > 0:
        if val < 0:
            temp = -(-val // next_num)
        else:
            temp = val // next_num

        dfs(idx + 1, temp, plus, minus, multi, div-1)


dfs(0, arr[0], plus, minus, multi, div)
print(max_val)
print(min_val)