import sys
input = sys.stdin.readline

n, k = map(int, input().split())
arr = [0] + list(map(int, input().split()))  # 1-based


swap_count = 0

def record_swap(x, y):  # x, y: 교환 직전에 서로 자리를 바꾸는 '값' 두 개
    global swap_count
    swap_count += 1
    if swap_count == k:
        if x < y:
            print(x, y)
        else:
            print(y, x)
        sys.exit(0)

def heapify(arr, root, size):
    # 최소 힙 성질 유지 (반복형). root: 시작 노드, size: 힙 크기(최대 인덱스)
    k = root  # 현재 부모 노드의 인덱스
    while 2 * k <= size:  # 왼쪽 자식이 존재할 때까지만 반복
        left = 2*k  # 왼쪽 자식 인덱스
        right = 2*k + 1  # 오른쪽 자식 인덱스
        smaller = left  # 두 자식 중 더 작은 값을 가진 자식의 인덱스

        if (right <= size) and (arr[right] < arr[left]):
            smaller = right

        if arr[smaller] < arr[k]:  # 자식이 더 작은 경우
            x, y = arr[k], arr[smaller]
            record_swap(x, y)

            arr[k], arr[smaller] = arr[smaller], arr[k]

            k = smaller
        else:
            break

def build_min_heap(arr, size):
    for i in range(n//2, 0, -1):
        heapify(arr, i, size)

def heap_sort_kth(arr, size):
    # 1) 최소 힙 구성
    build_min_heap(arr, size)
    # 2) 끝과 루트 교환 → 힙 줄이며 heapify
    for i in range(n, 1, -1):
        # 루트와 끝 원소 교환 (교환 '값' 기록)
        x, y = arr[1], arr[i]
        record_swap(x, y)

        arr[1], arr[i] = arr[i], arr[1]

        heapify(arr, 1, i-1)

heap_sort_kth(arr, n)
# 여기까지 오면 총 교환 횟수가 K 미만
print(-1)