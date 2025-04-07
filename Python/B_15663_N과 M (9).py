n , m = map(int, input().split())
numbers = sorted(list(map(int, input().split())))
used = [False] * n

def backtracking(sequence):
    if len(sequence) == m:
        print(' '.join(map(str, sequence)))
        return

    for i in range(n):
        if used[i] or (i > 0 and numbers[i] == numbers[i-1] and not used[i-1]):
            continue

        used[i] = True
        sequence.append(numbers[i])
        backtracking(sequence)
        sequence.pop()
        used[i] = False


backtracking([])