import sys
input = sys.stdin.readline

n, x = map(int, input().split())

# 레벨 L 버거 = B | Level L-1 | P | Level L-1 | B
# 1) B                (길이 1)
# 2) L-1 버거         (길이 length[n-1])
# 3) P                (길이 1)
# 4) L-1 버거         (길이 length[n-1])
# 5) B                (길이 1)

length = [0] * (n + 1)  # 레벨 L의 총 길이
pat = [0] * (n+1)  # 레벨 L의 패티 수

length[0] = 1
pat[0] = 1

for i in range(1, n+1):
    length[i] = (length[i - 1] * 2) + 3
    pat[i] = (pat[i - 1] * 2) + 1

def how_many(level, x):
    if level == 0:
        return 1 if x >= 1 else 0

    # 1번: B                (길이 1)
    # 2번: level-1 버거         (길이 length[n-1])
    # 3번: P                (길이 1)
    # 4번: level-1 버거         (길이 length[n-1])
    # 5번: B                (길이 1)
    if x == 0 or x == 1:  # X(안 먹기) or 1번: B(빵)
        return 0
    elif x <= (1 + length[level - 1]):  # 2번: 1(빵) + (level-1)햄버거 사이
        return how_many(level-1, x-1)
    elif x == (length[level - 1] + 1 + 1):  # 3번: 1(빵) + (level-1)햄버거 + 1(패티)
        return pat[level - 1] + 1
    elif x <= (1 + length[level - 1] + 1 + length[level - 1]):  # 4번: 1(빵) + (level-1)햄버거 + 1(패티) + (level-1)햄버거 사이
        return pat[level - 1] + 1 + how_many(level-1, x - (1 + length[level-1] + 1))
    else:  # 5번: 1(빵) + (level-1)햄버거 + 1(패티) + (level-1)햄버거 + 1(빵) 이상
        return pat[level]

print(how_many(n, x))