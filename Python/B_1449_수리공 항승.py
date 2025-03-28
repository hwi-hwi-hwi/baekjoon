n, l = map(int, input().split())
leak = list(map(int, input().split()))
leak.sort()

count = 0
covered = 0  # 현재 덮을 수 있는 위치(테이프의 끝)

# 정렬된 위치를 하나씩 확인하면서 테이프 배치
for pos in leak:
    # 현재 위치가 이미 덮여 있다면 continue
    if pos <= covered:
        continue

    # 새로운 테이프 사용
    count += 1
    covered = pos + (l - 1)

print(count)