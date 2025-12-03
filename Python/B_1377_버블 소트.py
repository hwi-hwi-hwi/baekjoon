import sys
input = sys.stdin.readline

n = int(input())

# 세 번째 시도 -> (원래 인덱스 - 정렬 후 인덱스) 최댓값 찾기
num = []
for idx in range(n):
    x = int(input())
    num.append((x, idx))

num.sort(key=lambda x: x[0])

max_val = 0
for i in range(n):
    max_val = max(max_val, ((num[i][1] - i) + 1))

print(max_val)

# 첫 번째 시도
# -> 시간 초과
# for i in range(1, n+2):
#     changed = False
#
#     for j in range(1, (n-i) + 1):
#         if num[j-1] > num[j]:
#             num[j-1], num[j] = num[j], num[j-1]
#             changed = True
#
#     if not changed:
#         print(i)
#         break

# 두 번째 시도
# -> 시간 초과
# for i in range(n):
#     if max(num) == num[len(num)-1]:
#         print(i+1)
#         break
#     else:
#         num.remove(max(num))