n, m = map(int, input().split())
s = input()

positions = {chr(c): [] for c in range(97, 123)}
for i, char in enumerate(s):
    positions[char].append(i)

removed = [False] * n
rem = m

for c in map(chr, range(97, 123)):
    count = len(positions[c])  # 현재 문자 c가 문자열에 몇 번 나오는지
    if rem >= count:
        for idx in positions[c]:
            removed[idx] = True

        rem -= count
    else:
        for idx in positions[c][:rem]:
            removed[idx] = True

        rem = 0
        break

result = []
for i in range(n):
    if not removed[i]:
        result.append(s[i])

print("".join(result))