import sys

def compress(x, y, size):
    base = video[x][y]
    for i in range(x, x+size):
        for j in range(y, y+size):
            if video[i][j] != base:
                half = size // 2
                return (
                        "(" +
                        compress(x, y, half) +
                        compress(x, y+half, half) +
                        compress(x+half, y, half) +
                        compress(x+half, y+half, half) +
                        ")"
                )

    return str(base)

n = int(input())
video = [list(map(int, list(sys.stdin.readline().strip()))) for _ in range(n)]

print(compress(0, 0, n))