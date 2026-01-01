import sys
input = sys.stdin.readline

n = int(input())
square = [list(map(int, input().split())) for _ in range(n)]

while n > 1:
    matrix = []
    for i in range(0, n, 2):
        row = []
        for j in range(0, n, 2):
            temp = []
            temp.append(square[i][j])
            temp.append(square[i][j+1])
            temp.append(square[i+1][j])
            temp.append(square[i+1][j+1])

            temp.sort()
            row.append(temp[2])

        matrix.append(row)

    square = matrix
    n //= 2

print(square[0][0])