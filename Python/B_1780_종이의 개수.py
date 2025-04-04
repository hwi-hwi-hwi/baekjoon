import sys

n = int(input())
papers = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

count = {-1: 0, 0: 0, 1: 0}

# 분할 정복 함수
def divideAndConquer(x, y, size):
    firstValue = papers[x][y]  # 첫 번째 값 저장

    #현재 범위가 모두 같은 숫자인지 확인
    isSame = True
    for i in range(x, x+size):
        for j in range(y, y+size):
            if papers[i][j] != firstValue:
                isSame = False
                break
        if not isSame:
            break

    # 모두 같은 숫자면 카운트 증가
    if isSame:
        count[firstValue] += 1
        return
    else:
        # 아니면 9등분하여 재귀 호출
        newSize = size // 3
        for i in range(3):
            for j in range(3):
                divideAndConquer(x + i * newSize, y + j * newSize, newSize)

divideAndConquer(0, 0, n)

print(count[-1])
print(count[0])
print(count[1])