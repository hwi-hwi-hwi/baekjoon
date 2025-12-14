n = int(input())

num = []
for _ in range(n):
    x = int(input())
    num.append(x)

num.sort()

max_in = 0
for i in range(n):
    # 윈도우 [i, i+4] 안에 원소가 몇 개인지 구하기
    start = num[i]
    end = start + 4
    cnt = 0

    for j in range(i, min(n, i+5)):
        if num[j] <= end:
            cnt += 1
        else:
            break  # 정렬되어 있으니 이후도 전부 end 초과

    max_in = max(max_in, cnt)

print(5 - max_in)

# 아래처럼 하면 연속된 구간만 구함
# count = 1
# max_count = 0
# for i in range(0, n-1):
#     if (num[i] + 1) == num[i+1]:
#         count += 1
#     else:
#         count = 0
#
#     max_count = max(max_count, count)
#
#     if count == 5:
#         break
#
# print(5 - max_count)