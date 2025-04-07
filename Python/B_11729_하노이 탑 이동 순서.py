def hanoi(n, start, mid, end):
    # n: 현재 옮기려는 원판 개수
    # start: 현재 원판이 놓여있는 시작 기둥 번호
    # mid: 중간 기둥(잠깐 올려둘 기둥)
    # end: 목표 기둥
    if n == 1:
        moves.append((start, end))
        return;
    # 1 단계: 가장 큰 원판을 제외한 위의 n-1개 원판을, 목표가 아닌 보조 기둥(mid)로 옮기는 단계
    hanoi(n-1, start, end, mid)
    # 2 단계: 남은 가장 큰 원판 하나를, 시작 기둥에서 목표 기둥(end)으로 직접 옮기는 단계
    moves.append((start, end))
    # 3 단계: 1단계에서 옮긴 n-1개의 원판을, 보조 기둥(mid) → 목표 기둥(end) 으로 옮기는 단계
    hanoi(n-1, mid, start, end)

n = int(input())
moves = []

hanoi(n, 1, 2,3 )

print(len(moves))
for move in moves:
    print(*move)