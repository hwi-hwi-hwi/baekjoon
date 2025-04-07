def backtracking(sequence):
    if len(sequence) == m:
        print(' '. join(map(str, sequence)))
        return

    for i in range(1, n+1):
        sequence.append(i)
        backtracking(sequence)
        sequence.pop()

n, m = map(int, input().split())

backtracking([])