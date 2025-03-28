import sys

n = int(sys.stdin.readline())
towers = list(map(int, sys.stdin.readline().split()))

stack = []  # (탑의 높이, 탑의 인덱스) 튜플
result = [0] * n  # 수신하는 탑의 번호 저장 (기본값 0)

for i in range(n):
    # 현재 탑보다 낮은 탑은 스택에서 제거 (현재 탑이 신호를 가로막음)
    # 스택이 비어 있지 않고, 스택의 맨 위(이전 탑)가 현재 탑보다 낮으면 제거
    while stack and (stack[-1][0] < towers[i]):
        stack.pop()

    if stack:  # 스택이 비어 있지 않다면,
        result[i] = stack[-1][1]  # 탑의 인덱스 저장

    stack.append((towers[i], i+1))  # 현재 (탑의 높이, 탑의 인덱스)를 스택에 추가

print(*result)